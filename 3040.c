#include<stdio.h>

int main()
{
        int a,b,c,max,i;
        scanf("%d",&max);
       
        for(i=0;i<max;i++)
        {
         scanf("%d%d%d",&a,&b,&c);
         if((a>=200&&a<=300)&&(b>=50)&&(c>=150))
         {
                 printf("Sim\n");
         }
         else
         {
                 printf("Nao\n");
         }
         

        }
       
        
        return 0;

}
