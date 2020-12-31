#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   while(a--){
        int x,y;
        scanf("%d%d",&x,&y);
        x=x+y;
        if(x==0)
             printf("PROXYCITY\n");
      else if(x==1)
            printf("P.Y.N.G.\n");
     else if(x==2)
             printf("DNSUEY!\n");
       else if(x==3)
             printf("SERVERS\n");
      else if(x==4)
             printf("HOST!\n");
     else if(x==5)
             printf("CRIPTONIZE\n");
    else if(x==6)
             printf("OFFLINE DAY\n");
    else if(x==7)
             printf("SALT\n");
    else if(x==8)
            printf("ANSWER!\n");
    else if(x==9)
            printf("RAR?\n"); 
    else if(x==10)
            printf("WIFI ANTENNAS\n");
    }
    return 0;
}
