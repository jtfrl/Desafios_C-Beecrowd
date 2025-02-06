//Developed by: @jtfrl
//Beecrowd: n. 1064

#include<stdio.h>
int main(){
    double list[6],total=0,media;
    int i,soma=0;
    //cria a lista para os numeros analisados

    for(i=0; i<6; i++){
        scanf("%lf",&list[i]);
    }
    for(i=0; i<6; i++){
        if(list[i]>0){//elemento da lista positivo
            soma+=1;
        }
    }
    for(i=0; i<6; i++){
        if(list[i]>0){
            total = total+list[i];
            //o total que serve no cálculo da média
        }
    }
    media=total/(soma);
    printf("%d valores positivos\n",soma);
    printf("%.1lf\n",media);
    return 0;
}

