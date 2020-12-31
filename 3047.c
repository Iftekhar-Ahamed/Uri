#include<stdio.h>

int main()
{
        int a,b,c,d,max;
        scanf("%d%d%d",&a,&b,&c);

        d=b+c;
        d=a-d;
        if(b>c&&b>d)
        {
                printf("%d\n",b);
        }
        else if(c>b&&c>d)
        {
                printf("%d\n",c);
        }
        else
        {
                printf("%d\n",d);
        }
        
        return 0;

}
