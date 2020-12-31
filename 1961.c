#include<stdio.h>
int main()
{
        int a,b,i,def=0,count=0;
        scanf("%d%d",&a,&b);
        int array[b];


        for(i=0;i<b;i++)
        {
             scanf("%d",&array[i]);
        }
        i=0;
        b=b-1;
        while(i<b)
        {
        if(array[i]>=array[i+1])def=array[i]-array[i+1];
        else def=array[i+1]-array[i];

           if(def>a)
           {
                  count++;
           }
              i++;
        }
        if(count>=1)
        {
                printf("GAME OVER\n");
        }
        else
        {
                printf("YOU WIN\n");
        }

        return 0;
}

