//Developed by: @jtfrl
//Beecrowd: n. 1028

#include <stdio.h>
//note que o código poderia ser colocado numa função recursiva
int main ()
{
    int rest,x,y,n,temp;

    scanf ("%d",&n);
    while (n--)
    {
        scanf ("%d %d",&x,&y);
        if(y>x)
        {
            temp=y;
            y=x;
            x=temp;
        }
        while (x%y!=0)
        {
            rest = x % y;
            x = y;
            y = rest;
        }
        printf ("%d\n",y);
    }
    return 0;
}
