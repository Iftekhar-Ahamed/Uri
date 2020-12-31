#include<stdio.h>

int main()
{
        int x;
        scanf("%d",&x);
        int i,temp=0,array[x],n,pos=0;

        for(i=0;i<x;i++)
        {
                scanf("%d",&n);
                array[i]=n;

                if(temp>array[i])
                {
                        temp=array[i];
                        pos=i;

                }

        }
        printf("Menor valor: %d\nPosicao: %d\n",temp,pos);

}

