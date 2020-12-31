#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    int i,k=1,j,m=10;
    char x[2];
    scanf("%s",x);
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&N[i][j]);
        }
    }
    for(i = 0;i <= 4;i++){
                for(j=k;j<=m;j++)
                {
                         sum += N[i][j];
                }
                k++;
                m--;

        }
    if(x[0]=='S')printf("%.1lf\n",sum);
    else if(x[0]=='M')printf("%.1lf\n",sum/30.0);
    return 0;
}

