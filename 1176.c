#include<stdio.h>
int main()
{
  long long int array[60];
  int n,a,i,j;

  array[0]=0;
  array[1]=1;
  for(i=2;i<=60;i++)
  {
          array[i]=array[i-2]+array[i-1];
  }
  scanf("%d",&n);
  for(j=1;j<=n;j++)
  {
          scanf("%d",&a);
          printf("Fib(%d) = %lld\n",a,array[a]);
  }
   return 0;
}

