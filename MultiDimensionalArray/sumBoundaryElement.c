#include <stdio.h>
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
                sum=sum+arr[i][j];
            }
            else{
                   continue; 
            }
        }
    }
    printf("the sum is %d " ,sum);

}