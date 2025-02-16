	//Developed by: @jtfrl
	//Beecrowd: n. 1452

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 210
#define MAX_APL 100
#define MAX_TAM 50

typedef struct {
    char nomeAppProv[MAX_TAM];
} app;

int letCom(const void *r, const void *s) {
    return strcmp(((app*)r)->nomeAppProv, ((app*)s)->nomeAppProv);
}

int pesqBin(app *arr, int tam, const char *chave) {
    int esq = 0, dir = tam - 1;
    while (esq <= dir) {
        int mid = esq + (dir - esq) / 2;
        int compara = strcmp(arr[mid].nomeAppProv, chave);
        if (compara == 0) {
            return mid;
        }
        if (compara < 0) {
            esq = mid + 1;
        } else {
            dir = mid - 1;
        }
    }
    return -1;
}

int main() {
    unsigned short n, m;
    while (scanf("%hu %hu", &n, &m) == 2 && (n != 0 || m != 0)) {
        app servidor[MAX][MAX_APL];
        int servidor_count[MAX] = {0};

        for (unsigned short k = 0; k < n; k++) {
//armazena os dados pra servidor
            int serv;
            scanf("%d", &serv);
            for (int ap = 0; ap < serv; ap++) {
                scanf("%s", servidor[k][ap].nomeAppProv);
            }
            qsort(servidor[k], serv, sizeof(app), letCom);
//qsort usa a função letCom
            servidor_count[k] = serv;
        }

        int total = 0;
        for (unsigned short cli = 0; cli < m; cli++) {
            int clnt;
            scanf("%d", &clnt);
            int requisicao[MAX_APL] = {0};
            int serv_c[MAX] = {0};
            for (int apl = 0; apl < clnt; apl++) {
                char apprq[MAX_TAM];
                scanf("%s", apprq);
                if (!requisicao[apl]) {
                    requisicao[apl] = 1;
                    for (int i = 0; i < n; i++) {
                        if (!serv_c[i] && pesqBin(servidor[i], servidor_count[i], apprq) != -1) {
                            serv_c[i] = 1;
                            total++;
                        }
                    }
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}

