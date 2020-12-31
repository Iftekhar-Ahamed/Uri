#include<stdio.h>
int main()
{

        while(1)
        {
                int i,a,b,c,result=0;
                double area;

                scanf("%d",&a);

                if(a==0)
                {
                        break;
                }
                else
                {
                        scanf("%d%d",&b,&c);

                        area=(a*b*100)/c;

                        for(i=1;i*i<=area;i++)
                        {
                                result=i;
                        }

                        printf("%d\n",result);

                }


        }
        return 0;
}

