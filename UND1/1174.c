//Developed by: @jtfrl
//Beecrowd: n. 1174
#include <stdio.h>
#include <stdbool.h>

#define UNASSIGNED -1.0

int main(){
	float A[100];
	int i;

	for (i = 0; i < 100; i++) {
    	A[i] = UNASSIGNED;
	} //deixa cada valor como não preenchido

	for(i=0;i<100;i++){
    	scanf("%f", &A[i]);
	}

	for (i=0;i<100;i++){
 	 //impede que os dados não alocados sejam mostrados na saída
    	if(A[i]!=UNASSIGNED&&A[i]<=10.0){
        	printf("A[%d] = %.1f\n", i, A[i]);
    	}
	}

	return 0;
}

