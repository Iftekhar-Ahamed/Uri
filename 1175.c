#include<stdio.h>

int main()
{
        int array[20],i,temp=0,j=0;

        for(i=0;i<20;i++)
        {
                scanf("%d",&array[i]);
        }
        for(i=19;i>=10;i--)
        {
             temp=array[i];
             array[i]=array[j];
             array[j]=temp;
             j++;
        }
         for(i=0;i<20;i++)
        {
                printf("N[%d] = %d\n",i,array[i]);
        }
    return 0;
}

