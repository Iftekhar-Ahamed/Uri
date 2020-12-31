#include <stdio.h>
#include <string.h>

int main()
{
    int i,n;
    char main[10000];

        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%s",main);
            getchar();
            int j=0,sum=0;
            while (main[j]!='\0')
            {
                if(main[j]=='0')sum=sum+6;
                else if(main[j]=='1')sum=sum+2;
                else if(main[j]=='2')sum=sum+5;
                else if(main[j]=='3')sum=sum+5;
                else if(main[j]=='4')sum=sum+4;
                else if(main[j]=='5')sum=sum+5;
                else if(main[j]=='6')sum=sum+6;
                else if(main[j]=='7')sum=sum+3;
                else if(main[j]=='8')sum=sum+7;
                else if(main[j]=='9')sum=sum+6;
                j++;
            }
            printf("%d leds\n",sum);

        }


    return 0;
}

