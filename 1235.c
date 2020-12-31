#include <stdio.h>
#include <string.h>

int main() {
  int a,i,j,b;
  char s[102];
  scanf("%d",&a);
    getchar();
  for (i=0;i<a;i++){
     gets(s);
      setbuf(stdin,NULL);

      b=strlen(s)/2;
      for(j=b-1;j>=0;j--){
          printf("%c",s[j]);
      }
      for(j=strlen(s)-1;j>=b;j--){
          printf("%c",s[j]);
      }
      printf("\n");
  }

    return 0;
}




