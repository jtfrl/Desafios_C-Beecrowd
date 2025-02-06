//Developed by: @jtfrl
//Beecrowd: n. 1078

#include <stdio.h>
 
int main() {
    int n, i, prod;
    prod=0;
    scanf("%d", &n);
    if(n>=1&&n<=1000){
        for(i=1;i<=10;i++){
                prod=n*i;
                printf("%d x %d = %d\n", i, n, prod);
            }
    }
 
    return 0;
}
