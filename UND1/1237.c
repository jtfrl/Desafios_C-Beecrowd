//Developed by: @jtfrl	
//Beecrowd: n. 1237
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função q encontra a maior sequencia
void longaStr(char x[], char y[]) {
	int m = strlen(x);
	int n = strlen(y); //tamanho de ambas as str
	int res = 0;
	for (int i = 0; i < m; i++) {
    	for (int j = 0; j < n; j++) {
        	if (x[i] == y[j]) {
            	int c = 0;
            	for (int k = 0; k + i < m && k + j < n; k++) {
                	if (x[k + i] != y[k + j])
                    	break;
                	c++;
            	}
            	if (c > res)
                	res = c;
        	}
    	}
	}
	printf("%d\n", res);
}

int main() {
	char s1[100], s2[100];
	//leitura até um caractere de nova linha inserido: stdin
	while (fgets(s1, sizeof(s1), stdin) != NULL && fgets(s2, sizeof(s2), stdin) != NULL) {
    	// remove linhas extras
    	s1[strcspn(s1, "\n")] = 0;
    	s2[strcspn(s2, "\n")] = 0;
    	longaStr(s1, s2);
	}
	return 0;
}

