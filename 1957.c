#include <stdio.h>
#include<string.h>
int main()
{
    long long int decimal;
    int mod,i=0,lnth,j;
    char hexdecimal[20];

    scanf("%lld",&decimal);



    while(decimal>0)
    {
        mod=decimal%16;
        decimal=decimal/16;

        if(mod==10)hexdecimal[i]='A';

        else if(mod==11)hexdecimal[i]='B';

        else if(mod==12)hexdecimal[i]='C';

        else if(mod==13)hexdecimal[i]='D';

        else if(mod==14)hexdecimal[i]='E';

        else if(mod==15)hexdecimal[i]='F';

        else if(mod<=9)hexdecimal[i]=mod+48;

        i++;

    }
 hexdecimal[i]='\0';
  lnth = strlen(hexdecimal);
    for(j = lnth-1; j>=0; j--)
        printf("%c", hexdecimal[j]);
    printf("\n");

    return 0;
}

