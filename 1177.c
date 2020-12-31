#include <stdio.h>
int main()
{
    int N[1000], x, y,z;
    scanf ("%d", &x);
    for(y=0,z=0; y<1000; y++,z++)
    {
            if(z==x)
            z=0;

            N[y]=z;
        printf("N[%d] = %d\n",y,N[y]);
    }
    return 0;
}

