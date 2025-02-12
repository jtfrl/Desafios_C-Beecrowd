//Developed by: @jtfrl
//Beecrowd: n. 2633
#include <stdio.h>
#include <string.h>

typedef struct {
    char nomeC[21]; // limite de caracteres
    unsigned short dataV;
} carne; // tipo carne criado

void ordenaC(carne *, unsigned short tam); 
/*
protótipo de função
:: ajuda a mostrar para o compilador que a função ordenaC
:: toma o ponteiro no tipo 'carne'; a função pode ser chamada 
:: dentro de main() sem erro
*/


int main() { 
    unsigned short n, i;

    while (scanf("%hu", &n) != EOF) {
        //checaagem do limite
        if (n > 11) {
            continue; //continua para a próxima
        }

        carne listaC[n];

        for (i = 0; i < n; i++) {
            //limitação de caractere
            scanf("%20s %hu", listaC[i].nomeC, &listaC[i].dataV);
//armazena o nome da carne e a validade
        }

        ordenaC(listaC, n);

        for (i = 0; i < n; i++) {
            if (i != 0) {
                printf(" ");
            }
            printf("%s", listaC[i].nomeC); 
        }
        printf("\n");
    }

    return 0; 
}

void ordenaC(carne *listaC, unsigned short tam) {
    short i = 1, j;
    carne temp; //temp entra com um tipo novo

    while (i < tam) {
        j = i - 1;
        temp = listaC[i];
        while (j >= 0 && listaC[j].dataV > temp.dataV) {
            listaC[j + 1] = listaC[j];
            j--;
// comparação com temp
        }
        listaC[j + 1] = temp;
        i++;
    }
}
