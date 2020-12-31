#include<stdio.h>
#include<math.h>

int main()

{
    double s=0,v,t,fuel=0;
    scanf("%lf",&t);
    scanf("%lf",&v);
    s=v*t;
    fuel=s/12;

    printf("%.3lf\n",fuel);

    return 0;

}

