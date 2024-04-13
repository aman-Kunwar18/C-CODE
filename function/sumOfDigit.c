#include<stdio.h>
int sumOfDigit(int num){
    int sum=0;
    while(num>0){
    int rem = num%10;
    sum = sum + rem;
    num =num/10;
    }
    return sum;
}

int main(){
    int num;
    printf("Enter The Number\n");
    scanf("%d",&num);
    int sum = sumOfDigit(num);
    printf("The Sum Of Digit is %d",sum);
}