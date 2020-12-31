#include <stdio.h>
int main()
{
    int a,i,real_taste,count=0;
    scanf("%d",&real_taste);
       for(i=0;i<5;i++)
       {
           scanf("%d",&a);
           if(a==real_taste)
           {
               count++;
           }
       }
    printf("%d\n",count);

    return 0;
}

