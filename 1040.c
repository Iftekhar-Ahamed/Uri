#include<stdio.h>

int main()

{
    float n1,n2,n3,n4,avg,last,avg2;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

    avg=(n1*2+n2*3+n3*4+n4)/10;

    printf("Media: %.1f\n",avg);

    if(avg>7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(5.0<=avg&&avg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&last);
        printf("Nota do exame: %.1f\n",last);
        avg2=(avg+last)/2;
        if(avg2>5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avg2<4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg2);
    }
    return 0;
}

