//Developed by: @jtfrl
//Beecrowd: n. 1080

#include <stdio.h>
 
int main() {
    int max=0, i, n, pos;
    
    //laço de leitura inicial
        for(i=1;i<=100;i++){
            scanf("%d", &n);
                if(max<n){
                    max=n;
                    pos=i;
                }
        }
    
    //mostra qual deles é o maior
        
    printf("%d\n", max);
    printf("%d\n", pos);

 
    return 0;
}

