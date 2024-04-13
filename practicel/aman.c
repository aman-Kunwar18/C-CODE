// Write a C program to find sum of all prime numbers between 1 to n
#include<stdio.h>
int main() {
        int arr[5]={1,2,3,4,5};
    int pos , val;
    printf("ENTER POS ");
    scanf("%d",&pos);
    printf("ENTER VAl ");
    scanf("%d",&val);
        for(int i=5;pos<i;i++){
            arr[i+1] = arr[i];
        }
        arr[pos] = val;

        for(int i=1;i<7;i++){
            printf("%d",arr[i]);
        }


}