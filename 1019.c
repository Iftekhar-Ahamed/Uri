#include <stdio.h>
int main()
{
    int time,second,minute=0,hour=0,b;
    scanf("%d",&time);
    second=time;
    hour=second/3600;
    b=second%3600;
    minute=b/60;
    b=b%60;
    second=b;

    printf("%d:%d:%d\n",hour,minute,second);
    return 0;
}

