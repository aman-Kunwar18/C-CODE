#include <stdio.h>
int main()
{
    int num;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);
    int n=num;
    int sum=0;
    while(n>0){
       int rem = n%10;
        rem = rem*rem*rem;
        sum = sum+rem;
        n=n/10;
    }
    if(num == sum){
        printf("%d is a armstrong number\n" , num);
    }
    else{
        printf("%d is not  a armstrong number\n" , num);
    }
}
