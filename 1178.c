#include <stdio.h>
int main()
{
        int y;
    double x,N[100];
    scanf ("%lf", &x);
    for(y=0; y<100; y++)
    {
            N[y]=x;
        printf("N[%d] = %.4lf\n",y,N[y]);
        x=x/2;
    }
    return 0;
}

