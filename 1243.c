#include<stdio.h>
#include<string.h>
#include <stdbool.h>
int total_len=0,len=0,word;
void cleararra(char *s,int n){
    int i;
    for(i=0;i<n;i++){
        s[i]='\0';
    }
}
int postion(char *s){
    int i;
    for(i=0;i<strlen(s);i++){
        if(s[i]==' ')
        return i;
    }
    return strlen(s);
}
void substr(char *s,char *sub,int n){
int i;
for(i=0;i<n;i++){
    sub[i]=s[i];
}
sub[i]='\0';
}
void delchar(char *x,int a,int b)
{
  char s[100];
  cleararra(s,100);
  for(a=0;b<strlen(x);a++){
      s[a]=x[b++];
  }
  s[a]='\0';
  strcpy(x,s);
}
bool check_sub(char *sub){
    int i;
    for(i=0;i<strlen(sub);i++){
        if(!((sub[i]>='A'&&sub[i]<='Z')||(sub[i]>='a'&& sub[i]<='z')))
        {
            if((i+1==strlen(sub))&&sub[i]=='.'&&strlen(sub)!=1){
                return true;
            }else
            {
             return false;
            }

        }
    }
    return true;
}
int find_substring(char *s){
    char sub[100];
    cleararra(sub,100);
    substr(s,sub,postion(s));
    delchar(s,0,postion(s)+1);

    if(strlen(sub)==1&&sub[0]==' '){
       return 0;
    }
    if(check_sub(sub)&&strlen(sub)!=0){
        word++;
        if(sub[strlen(sub)-1]=='.')
        return strlen(sub)-1;
        else
        {
           return strlen(sub);
        }
    }
    return 0;
}
int main(){
    char s[100];
    int i;
    while (scanf("%[^\n]%*c",s)!=EOF)
    {

        if(strlen(s)==0){
          printf("250\n");
          getchar();
        }
        else {
            while (strlen(s)!=0)
        {
         total_len+=find_substring(s);
        }

            if(word==0){
              printf("250\n");
            }else
            {
                int x=total_len/word;
                if(x>=6){
               printf("1000\n");
                }else if(x==4||x==5){
                    printf("500\n");
                }else
                {
               printf("250\n");
                }
            }

            word=total_len=0;

            cleararra(s,100);

        }

    }
    return 0;
}
