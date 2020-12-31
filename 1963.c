#include <stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    b=b-a;
    c=b/a;
    printf("%.2lf%%\n",c*100);
    return 0;
}

