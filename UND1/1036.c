//Developed by: @jtfrl
//Beecrowd: n. 1036
#include <stdio.h>
#include <math.h>

 
void bhsk(float a, float *b, float *c, float *delta, float *R1, float *R2, float *r, int *ex){
    *delta=pow(*b,2)-4.0*(a)*(*c);
    *ex=0;
    if (*delta<0||a==0){
        printf("Impossivel calcular\n");
        *ex=1; //contador para impedir a execução do delta
        return;
    }
     
        *r=sqrt(*delta);
        *R1=(-(*b)+(*r))/(2.0*a); //importante indicar parênteses aq
        *R2=(-(*b)-(*r))/(2.0*a);
    

}

int main() {
    float a, b, c, delta, R1, R2, r;
    int ex;
    scanf("%f %f %f", &a, &b, &c);
    
    
    bhsk(a, &b, &c, &delta, &R1, &R2, &r, &ex);
    
    if(ex==0){//impede a execução do delta quando a há delta menor que 0 ou 'a' igual a 0
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }
    return 0;
}
