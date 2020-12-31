#include <stdio.h>
int main()
{
      int odd[5],even[5],i,j,n,x=0,y=0;



      for(i=0;i<15;i++)
      {
              scanf("%d",&n);

              if(n%2==0)
              {
                      even[x]=n;
                       x++;
                      if(x==5)
                      {
                              for(j=0;j<5;j++)
                              {
                                      printf("par[%d] = %d\n",j,even[j]);
                                      x=0;
                              }
                      }




              }
              else
              {
                      odd[y]=n;
                       y++;

                      if(y==5)
                      {
                              for(j=0;j<5;j++)
                              {
                                      printf("impar[%d] = %d\n",j,odd[j]);
                                      y=0;
                              }
                      }




              }




      }
        for(j=0;j<y;j++)
       {
        printf("impar[%d] = %d\n",j,odd[j]);
       }
        for(j=0;j<x;j++)
        {
        printf("par[%d] = %d\n",j,even[j]);
        }

    return 0;
}

