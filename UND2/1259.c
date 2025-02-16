//Developed by: @jtfrl
//Beecrowd: n. 1259
#include <stdio.h>
#include <stdlib.h>


int cres(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int d_cres(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n;
    int listaP[100001];
    int listaI[100001]; 
    int dado;
    int p_count = 0, i_count = 0;

    //leitura da lista de numero de numeros
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100000) {
        return 1;
    }

    // le apenas os numeros validos
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &dado) != 1 || dado < 0) {
            return 1;
        }
        if (dado % 2 == 0) {
            listaP[p_count++] = dado;
        } else {
            listaI[i_count++] = dado;
        }
    }

    // ordencao
    qsort(listaP, p_count, sizeof(int), cres);
    qsort(listaI, i_count, sizeof(int), d_cres);

    // ordem crescente
    for (int j = 0; j < p_count; j++) {
        printf("%d\n", listaP[j]);
    }
    // numeros colocados em ordem descrescente
    for (int k = 0; k < i_count; k++) {
        printf("%d\n", listaI[k]);
    }

    return 0;
}
