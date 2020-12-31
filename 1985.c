#include <stdio.h>
int main()
{
    float price[]={1.50,2.50,3.50,4.50,5.50};
    int i,n,id,limit;
    float cost=0;
    scanf("%d",&n);
       for(i=0;i<n;i++)
       {
           scanf("%d%d",&id,&limit);
           id=id-1001;
           cost=cost+price[id]*limit;
       }
    printf("%.2lf\n",cost);
    return 0;
}

