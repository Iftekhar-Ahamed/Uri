#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int tst, lnth;
    string name;
    scanf("%d", &tst);
    while(tst--)
    {
        cin>>name;
        lnth = name.size();
        printf("%.2lf\n", lnth*.01);
    }
    return 0;
}
