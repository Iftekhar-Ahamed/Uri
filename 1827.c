#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,arr[102][102];
    while(scanf("%d",&n)!=EOF){
        k=n-1;
        l=n/3;
        m=n-l;
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(i==j)arr[i][j]=2;
                else arr[i][j]=0;
                if(j==k)arr[i][j]=3;
            }
            k--;
        }
        for(i = l;i < m;i++){
            for(j = l;j < m;j++){
                if(i==n/2 && j==n/2)arr[i][j]=4;
                else arr[i][j]=1;
            }
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

