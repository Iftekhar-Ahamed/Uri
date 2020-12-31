#include<stdio.h>
int main()
{
        int n;
        while( scanf("%d",&n)!=EOF)
        {
                int i,j,b=0,a=0;

                int array[n][n];

               for(i=0;i<n;i++)
               {
                  for(j=0;j<n;j++)
                  {
                          array[i][j]=3;
                  }

               }

               for(i=0;i<n;i++)
               {
                       array[i][a]=1;
                       a++;
               }
               b=n-1;
               for(i=0;i<n;i++)
               {
                       array[i][b]=2;
                       b--;
               }

               for(i=0;i<n;i++)
               {
                       for(j=0;j<n;j++)
                       {
                                printf("%d",array[i][j]);
                       }
                       printf("\n");

               }



        }
        return 0;
}

