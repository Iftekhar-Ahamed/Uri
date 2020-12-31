#include <stdio.h>
#include <string.h>
int main()
{
    char c_1[200],c;
    int n,i,j;
    while(1)
    {
        scanf("%c", &c);
        scanf("%s", c_1);
        getchar();
        n = strlen(c_1);
        if(c==48)
        {
            break;
        }
        for(i=0;i<n;i++)
        {
            if (c_1[i] == c)
            {
                for (j = i; j < n; j++)
                {
                    c_1[j]=c_1[j+1];
                }
                n--;
                i--;
            }
        }
        for(i=0;i<n;i++)
        {
            if (c_1[i] == 48)
            {
                for (j = i; j < n; j++)
                {
                    c_1[j]=c_1[j+1];
                }
                n--;
                i--;
            } else
            {
                break;
            }
        }
        if (n == 0)
        {
            c_1[0] = '0';
            c_1[1] = '\0';
        }
        printf("%s\n",c_1);
        for(i=0;i<200;i++)
        {
            c_1[i]='\0';
        }

    }


    return 0;
}

