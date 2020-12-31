#include<stdio.h>
int main()
{
       int a,temp;
       scanf("%d",&a);

       temp=a;
       while(temp!=0)
       {
               if(temp>=1000){temp=temp-1000;printf("M");}
               else if(temp>=900){temp=temp-900;printf("CM");}
               else if(temp>=500){temp=temp-500;printf("D");}
               else if(temp>=400){temp=temp-400;printf("CD");}
               else if(temp>=100){temp=temp-100;printf("C");}
               else if(temp>=90){temp=temp-90;printf("XC");}
               else if(temp>=50){temp=temp-50;printf("L");}
               else if(temp>=40){temp=temp-40;printf("XL");}
               else if(temp>=10){temp=temp-10;printf("X");}
               else if(temp>=9){temp=temp-9;printf("IX");}
               else if(temp>=5){temp=temp-5;printf("V");}
               else if(temp>=4){temp=temp-4;printf("IV");}
               else if(temp>=1){temp=temp-1;printf("I");}

       }
      printf("\n");
        return 0;
}

