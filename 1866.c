#include <stdio.h>
int main()
{
    int a,b,c,i,sum=0;
    scanf("%d", &a);
    for(b=0; b<a; b++,sum=0)
    {
        scanf("%d", &c);
          for(i=0;i<c;i++)
          {
                  if(i%2==0)
                  {
                          sum=sum+1;
                  }
                  else
                  {
                          sum=sum-1;
                  }
          }
          printf("%d\n",sum);
    }
    return 0;
}

