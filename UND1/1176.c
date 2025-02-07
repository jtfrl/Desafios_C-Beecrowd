//Developed by: @jtfrl
//Beecrowd: n. 1176

#include <stdio.h>
#include <math.h>

void conversor_t(int tempf, int *segn, int *min_n, int *hora_n, int *resm, int *resh){
        //primeiro if: anula hora e min. caso seja zero
        if(tempf>=1&&tempf<=60){
            *segn=tempf;
            *min_n=0;
            *hora_n=0;
        }else if(tempf>60&&tempf<=3599){
        
              *min_n=tempf/60;
              *segn=tempf%60;
              *hora_n=0;
        } else if(tempf%60!=0){
            *hora_n=tempf/3600;
            *resh=tempf%3600;
            *min_n=*resh/60;
            *segn=*resh%60;
        }

//os ponteiros vão ser usados para apontar para os valores inseridos

}
    
 
int main(void) {
    
    int tempf;
    //usamos as variaveis da função anterior
    int segn, min_n, hora_n, resm, resh;
    scanf("%d", &tempf);
    
    //endereça as variáveis da função
    //cada ponteiro em conversor_t é chamado com &
    conversor_t(tempf, &segn, &min_n, &hora_n, &resm, &resh);
    
    printf("%d:%d:%d\n", hora_n, min_n, segn);
 
    return 0;
}


