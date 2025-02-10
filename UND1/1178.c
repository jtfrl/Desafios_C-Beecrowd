//Developed by: @jtfrl
//Beecrowd: n. 1178

#include <stdio.h>

void half(double n, double N[0]){ //cria o array mas sem índice ainda
    N[0]=n;
    
    //colocando o valor da metade
    for(int i=1;i<=99;i++){
        N[i]=N[i-1]/2.0;
    }
    
    for(int i=0;i<=99;i++){
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
}

int main(){

 double n;
 double N[100];
 
 scanf("%lf", &n);


 
 half(n, N);
// ao passar o valor pra função half, o array é associado a um ponteiro (1o. elemento)
// por isso, aqui em main, a função toma o N, p. ex., diretamente já que N é um array, 
// então passar a variável é como passar um ponteiro ao primeiro elemento
 
    return 0;
}
