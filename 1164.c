#include <stdio.h>

int main()
{
    int n,sum=0,i,j,x;

     scanf("%d",&x);
     for(j=1;j<=x;j++)
     {
             sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
           sum=sum+i;
        }
    }
        if(sum==n)
        {
            printf("%d eh perfeito\n",n);

        }
        else
            printf("%d nao eh perfeito\n",n);


     }

    return 0;
}

