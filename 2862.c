#include <stdio.h>

int main() {
    int i,a,b;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b>8000)printf("Mais de 8000!\n");
        else printf("Inseto!\n");
    }
    return 0;
}

