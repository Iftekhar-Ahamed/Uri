#include <stdio.h>

int main()

{
    float salary,increase=0,total=0;
    scanf("%f",&salary);

    if(salary<=400.00)
    {
        increase=(salary*0.15);
        total=salary+increase;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",total,increase);

    }
    else if(salary<=800.00)
    {
        increase=(salary*0.12);
        total=salary+increase;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",total,increase);

    }
    else if(salary<=1200.00)
    {
        increase=(salary*0.10);
        total=salary+increase;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",total,increase);

    }
    else if(salary<=2000.00)
    {
        increase=(salary*0.07);
        total=salary+increase;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",total,increase);

    }
    else
    {
        increase=(salary*0.04);
        total=salary+increase;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",total,increase);

    }


    return 0;

}

