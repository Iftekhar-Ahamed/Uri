#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    int i,j,m=11,a=7;
    char x[2];
    scanf("%s",x);
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&N[i][j]);
        }
    }
    for(i = 1;i < 11;i++){
                if(i<=5)
                {
                       for(j=m;j<=11;j++)
                       {
                                sum=sum+N[i][j];
                       }
                       m--;
                }
                else
                {
                        for(j=a;j<=11;j++)
                        {
                                 sum=sum+N[i][j];
                        }
                        a++;
                }

        }
    if(x[0]=='S')printf("%.1lf\n",sum);
    else if(x[0]=='M')printf("%.1lf\n",sum/30.0);
    return 0;
}

