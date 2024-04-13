#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==j || i+j==n-1 ){
            sum = sum + arr[i][j];
           }
        }
    }
    printf("%d" , sum);

}