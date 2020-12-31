#include <stdio.h>
#include <string.h>

int main()
{
    char  c1[8];
    int i,stable,n;

    scanf("%d%d",&stable,&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",c1);
        if(c1[0]=='f')
        {stable++;}
        else
        {stable--;}

    }

    printf("%d\n",stable);

    return 0;
}

