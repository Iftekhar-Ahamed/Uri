#include<stdio.h>
int main()
{

        while(1)
        {
                int n,c=0,i,j,k,s=1,f=2,e=0,a=1;
                scanf("%d",&n);
                if(n==0)
                {
                        break;
                }
                int array[n][n];

               for(i=0;i<n;i++)
               {
                       c=n;
                       c=c-1;
                       for(j=0;j<=c;j++)
                       {
                              if(i==a)
                              {
                                      e=f;
                                for(k=0;k<=i;k++)
                               {
                                       if(e==0)
                                       {
                                               s=2;
                                               c++;
                                               break;
                                       }
                                       else
                                       {
                                              array[i][k]= e;
                                              e--;
                                       }
                               }
                                a++;f++;j=k-1;
                              }
                              else
                              {
                                      array[i][j]=s;
                                       s++;
                              }

                       }
                       s=2;



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

