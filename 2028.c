#include <stdio.h>
int main()
{
    int a,i,case_number,count=0,count_1=0;

    while(scanf("%d",&case_number)!=EOF)
    {
        count++;
        count_1=0;
         for(i=0;i<=case_number;i++)
      {
                 if(i==0){count_1++;}
                 else
                  {
                  for(a=1;a<=i;a++)
                  {
                    count_1++;

                  }
                  }
      }
      if(count_1==1)printf("Caso %d: %d numero\n",count,count_1);
else{printf("Caso %d: %d numeros\n",count,count_1);}

      for(i=0;i<=case_number;i++)
      {
                 if(i==0){printf("0");}
                 else
                  {
                  for(a=1;a<=i;a++)
                  {
                    printf(" %d",i);

                  }
                  }
      }
      printf("\n\n");
    }
    return 0;
}

