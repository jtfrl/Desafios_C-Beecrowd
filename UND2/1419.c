//Developed by: @jtfrl
//Beecrowd: n. 1419
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int fatorial(int n) {//funcao de fatorial
    if (n == 0 || n == 1)  
        return 1;
    else
        return n * fatorial(n - 1);
  //isso é um exemplo de função recursiva
  //se o n é 5, ele sera multiplicado pelo numero quatro; 
  //esse resultado é, então, mutiplicado pelo 3
  //o processo se repete ate chegar em alguma das condições de excessão
}


int acmConv(const char* str) {
    int decimal = 0;
    int tam = strlen(str);  //tamanho da string

    for (int i = 0; i < tam; i++) {
        // Conversão na notação ACM
        int dgt = str[tam - 1 - i] - '0';  // Convert char to int
        // Add the term to the decimal result
        decimal += dgt * fatorial(i + 1);
    }

    return decimal;
}

int main() {
    char n[6];  // armazena os cinco dígitos e o final

    while (scanf("%s", n) == 1 && strcmp(n, "0") != 0) {
        int decimal = acmConv(n);
        printf("%d\n", decimal);
    }

    return 0;
}
