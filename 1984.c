#include <stdio.h>
int main()
{
    long long int num;
    int i;
    scanf("%llu",&num);
        while(num)
        {

            i=num%10;
            num=num/10;
            printf("%d",i);
        }
        printf("\n");
    return 0;
}

