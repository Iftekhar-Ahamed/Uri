#include <stdio.h>
#include <math.h>

int main()
{

   long double x,r;
   while (scanf("%Lf",&x) != EOF)
   {

       r=ceil(x/100);
       printf("%.0Lf\n",r);
   }
    return 0;
}
