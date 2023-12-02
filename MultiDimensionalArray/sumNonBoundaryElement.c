#include <stdio.h>
int main(){
    int r =3;
    int c =4;
    int arr[r][c];
    printf("Enter the element");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || j==0 || i== r-1 || j== c-1){
                continue;
            }
            else{
                    sum=sum+arr[i][j];
            }
        }
    }
    printf("the sum is %d " ,sum);

}

/* #include <stdio.h>
int main(){
    int arr[4][4]={
        {1,2,3,4},
        {2,3,4,5},
        {3,4,5,6},
        {4,5,6,7}
        };
    int sum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0 || j==0 || i==3 || j==3){
                continue;
            }
            else{
                    sum=sum+arr[i][j];
            }
        }
    }
    printf("the sum is %d " ,sum);

} */

