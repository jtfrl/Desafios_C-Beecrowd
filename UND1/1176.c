//1176 
#include <stdio.h>

int main(){
    long long int fib[61];
    int t, j, i, n;
    //t para teste, quantidade de testes pelo usuário n 
    fib[0]=0;
    fib[1]=1;
    
    //laço para criar numeros da seq. de fibonacci
    for(i=2;i<61;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    
    
    scanf("%d", &t);
    for(j=0;j<t;j++){
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib[n]);
    }
    
    
    
    return 0;
}
