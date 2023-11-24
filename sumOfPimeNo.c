// Write a C program to find sum of all prime numbers between 1 to n
#include<stdio.h>
int main() {
    int num = 5;
    int sum=0;
    for (int k = 2; k <= num; k++) {
        int flag = 0;

        for (int i = 2; i <= k / 2; i++) {
            if (k % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag==0) {
            sum =sum+k;
            
        }
    }
    printf("%d sum of  prime number\n", sum);
    return 0;
}