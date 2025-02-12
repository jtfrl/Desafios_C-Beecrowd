//Developed by: @jtfrl
//Beecrowd: n. 1515
#include <stdio.h>
#include <string.h>

int main(){
    int n=1, i, comp;
    unsigned short anoC, qtdAno;
    char nomeP[50], planMsg[50];
/*
n - casos
anoC- ano da msg
qtdAno - tempo levado para o envio da msg
comp - usado para checar a diferença de a e o próprio tempo

*/
        while(n!=0){
            comp=10000;
            scanf("%d", &n);
            if(n==0){
                break;
            }else{
                for (i=0; i<n; i++){
                    scanf("%s %hu %hu", nomeP, &anoC, &qtdAno);
                    if(anoC-qtdAno<comp){
                        strcpy(planMsg, nomeP);
                        comp=anoC-qtdAno;
                    }
                    
                }
            
                puts(planMsg);    
// similar ao printf, o puts serve para output
// a diferença é que a função permite criar uma linha logo abaixo da anterior
// quando a saída é informada

            }
            
        }


    return 0;
    
}

