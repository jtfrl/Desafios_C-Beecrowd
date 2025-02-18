//Developed by: @jtfrl
//Beecrowd: n. 1136
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
   unsigned short n, b;
   while(scanf("%hu %hu", &n, &b) == 2 && n){ //n não pode ser nulo
       //enquanto os dois dados estiverem preenchidos dentro dos parametros
           bool *a=(bool *)malloc((n+1)*sizeof(bool));
           //criação de espaço na memoria para arrays 
           //não se sabe os tamanhos para b e n
           //logo, o malloc cria um espaço prévio para isso
           int cont=n+1;
           //lista com dados previamente com valor f
           for (int i=0; i<=n; i++){
                a[i]=false;//mantem o controle sobre os numeros ja contados
           }
           int *c=(int *)malloc(b * sizeof(int));
           for (int i=0; i<b; i++){
               scanf("%d", &c[i]);
               a[c[i]]=true;//toma os valores de cada numero digitado (numero em cada bola)
               cont--;
           }
           
           
        //o trabalho até aq foi
        //ver os numeros digitados no array c
        //marcar como visto em a (um novo array)
        int dif;
        for (int k=0; k<b-1; k++){
            for (int j=k+1;j<b; j++){
                dif=abs(c[k]-c[j]);
                if(!a[dif]){
                    a[dif]=true;
                    cont--;
                }
            }
        }
        
        if(cont!=0){
            printf("N\n");
        }else printf("Y\n");
   
       free(a);
       free(c);
       
   }

    return 0;
}
