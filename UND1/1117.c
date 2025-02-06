//Developed by: @jtfrl
//Beecrowd: n. 1117

#include <stdio.h>
 
int main() {
    float n1, n2, media=0, soma=0;
    double lista[2];
    int i=0; //permite dar a validade ao código
    while(1){
        scanf("%f", &n1);
        if(n1>=0&&n1<=10){
            lista[i]=n1;
            i++;
        }
        else
            printf("nota invalida\n");
        if(i>1)
            break; //garante a execução apenas uma vez
    }
    
    media=(lista[0]+lista[1])/2.0;
    printf("media = %.2lf\n", media);
 
    return 0;
}
