#include <stdio.h>
int main()
{
    int a,b,c,s,t;



    scanf("%d%d%d",&a,&b, &c);


    if(a>b&&b<=c)
    {
             printf(":)\n");
    }
    else if(a<b&&b>=c)
    {
       printf(":(\n");
    }
    else if(a<b&&b<c)
    {
            t=b-a;s=c-b;
            if(t>s)printf(":(\n");
            else if(t<=s)printf(":)\n");

    }
    else if(a>b&&b>c)
    {
            t=a-b;s=b-c;
            if(t>s)printf(":)\n");
            else printf(":(\n");
    }
    else if(a==b&&b<c)
    {
            printf(":)\n");
    }
    else
    {
            printf(":(\n");
    }

    return 0;
}

