#include <stdio.h>

int main() {
    int n,i,f=0,m=0;
    char g,name[20];
    scanf("%d",&n);
    for (i=0;i<n;i++){

        scanf("%s %c",&name,&g);
        if(g=='F'){
            f++;
        } else{
            m++;
        }
    }
    printf("%d carrinhos\n"
           "%d bonecas\n",m,f);
    return 0;
}
