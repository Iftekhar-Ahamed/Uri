#include <stdio.h>


int main()
{
    int m,d,result=0,i;
    while(scanf("%d%d",&m,&d)!=EOF)
    {
        for(i=0;m<=11;i++)
        {
            if(m==1||m==3||m==5||m==7||m==8||m==10)
            {
                result=result+31;
                m++;
            }
            else if(m==2)
            {
                result=result+29;
                m++;
            }
            else
            {
                result=result+30;
                m++;
            }

        }
        result=result+25-d;
        if(result<0)
        {
            printf("Ja passou!\n");
        }
        else if(result==0)
        {
            printf("E natal!\n");
        }
        else if (result==1)
        {
            printf("E vespera de natal!\n");
        }
        else
        {
            printf("Faltam %d dias para o natal!\n",result);
        }
        result=0;
    }

    return 0;
}
