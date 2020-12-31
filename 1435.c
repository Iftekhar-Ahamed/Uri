#include<stdio.h>
int main()
{

        while(1)
        {
                int a=0,b=0,n,c=0,i,j,k,s=1;
                scanf("%d",&n);
                if(n==0)
                {
                        break;
                }
                int array[n][n];
                c=n;

               for(i=1;i<=n;i++)
               {
                       for(j=a;j<c;j++)
                       {
                               for(k=b;k<c;k++)
                               {
                                     array[j][k]= s;
                               }
                       }
                       s++;a++;b++;c--;


               }

               for(i=0;i<n;i++)
               {
                       for(j=0;j<n;j++)
                       {
                               if(j==0)
                               {
                                      printf("%3d",array[i][j]);
                               }
                               else{   printf(" %3d",array[i][j]);}

                       }
                       printf("\n");

               }
                 printf("\n");



        }
        return 0;
}

