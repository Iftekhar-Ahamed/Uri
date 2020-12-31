#include <stdio.h>

int main() 
{
    int n,i,x;
    char a;
    scanf("%d %c",&n,&a);
    for(i=0;i<n;i++)
    {

        scanf("%d",&x);
        if(a=='A'){
            if(x==1){
                a='B';
            } else if(x==3) {
                a='C';
            }
            continue;
        }
        if(a=='B'){
            if(x==1){
                a='A';
            } else if(x==2) {
                a='C';
            }
            continue;
        }
        if(a=='C'){
            if(x==2){
                a='B';
            } else if(x==3) {
                a='A';
            }
            continue;
        }

    }
    printf("%c\n",a);
    return 0;
}
