//Developed by: @jtfrl
//Beecrowd: n. 1024
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//bibliotecas padrão e de string para conversão de caracteres

void encrypt(char *s) {
    int tam = strlen(s); //tamanho da cadeia

    // movimenta as posições para esquerda
    for (int i = 0; i < tam; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            s[i] = s[i] + 3;
        }
    }

    // Reverte a string
    for (int i = 0; i < tam / 2; i++) {
        char res = s[i];
        s[i] = s[tam - i - 1];
        s[tam - i - 1] = res;
    }

    // mudança de posição na metade
    for (int i = tam / 2; i < tam; i++) {
        s[i] = s[i] - 1;
    }
}

int main() {
    int num; //indica as linhas de texto
    scanf("%d", &num);
    getchar(); // toma a nova linha

    
    if(num>=1&&num<=10000){
        for (int tc = 0; tc < num; tc++) {
            char s[1000]; // maximo de 1000 caracteres
            fgets(s, sizeof(s), stdin);

            // Remove novas linhas
            s[strcspn(s, "\n")] = 0;

            encrypt(s);
            printf("%s\n", s);
        }
    }

    return 0;
}


