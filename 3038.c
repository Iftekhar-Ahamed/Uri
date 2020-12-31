#include <stdio.h>
void displaystr(char s[]);
int main() {
    char s[257];
   while (scanf("%[^\n]%*c", s) !=EOF){
      displaystr(s);
   }
    return 0;
}
void displaystr(char s[]){
    int i=0;
    while (s[i] != '\0'){
        if(s[i]=='@'){
            printf("a");
        } else if (s[i]=='&'){
            printf("e");
        }
        else if (s[i]=='!'){
            printf("i");
        }
        else if (s[i]=='*'){
            printf("o");
        }
        else if (s[i]=='#'){
            printf("u");
        }
        else{
            printf("%c",s[i]);
        }

        i++;
    }
    printf("\n");
}
