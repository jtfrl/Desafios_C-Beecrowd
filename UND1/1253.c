//Developed by: @jtfrl
//Beecrowd: n. 1253

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void cesDeciph(char *plv, int mud) {
	int tam = strlen(plv);
	mud = mud % 26;
	for (int i = 0; i < tam; i++) {
      	if (plv[i] >= 'A' && plv[i] <= 'Z') {
          	plv[i] = ((plv[i]-'A'-mud+26)%26)+'A';
      	}
  	}
}

int main() {
	char plv[51];
	int tt, mud;

    
	scanf("%d", &tt);
	getchar();

	for (int i = 0; i < tt; i++) {
    	fgets(plv, sizeof(plv), stdin);
    	plv[strcspn(plv, "\n")] = 0;
    	scanf("%d", &mud);
    	getchar();
    	cesDeciph(plv, mud);
    	printf("%s\n", plv);
	}
	return 0;
}




