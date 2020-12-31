#include <stdio.h>
#include<string.h>

int main()
{
    char name[600];
    gets(name);
    printf((strlen(name)>80)?"NO\n":"YES\n");
    return 0;
}
