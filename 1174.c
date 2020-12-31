#include <stdio.h>
int main()
{
        int a;
    double N[100],V;

    for(a=0; a<100; a++)
    {
        scanf("%lf", &V);
        N[a]=V;
    }
     for(a=0; a<100; a++)
    {
        if(N[a]<=10)
           printf("A[%d] = %.1lf\n",a,N[a]);
    }


    return 0;
}

