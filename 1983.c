#include<stdio.h>
#define size 100
int main()
{
    int a,i,result=-1;
    scanf("%d",&a);

    int array1[size];
    float array2[size],temp=0;

    for(i=0;i<a;i++)
    {
        scanf("%d",&array1[i]);
        scanf("%f",&array2[i]);

        if(array2[i]>=8 && array2[i]>temp)
        {
            temp=array2[i];
            result=i;
        }
    }
    if(result==-1)printf("Minimum note not reached\n");
    else printf("%d\n",array1[result]);
    return 0;
}

