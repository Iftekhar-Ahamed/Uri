#include <stdio.h>

int main()
{
   char name;
    float salary,sold,Total;

    scanf("%s",&name);
    scanf("%f",&salary);
    scanf("%f",&sold);

    Total=salary+(sold*15)/100;

    printf("TOTAL = R$ %.2f\n", Total);


    return 0;
}

