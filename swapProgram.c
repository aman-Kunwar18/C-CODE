#include <stdio.h>

int main() {
    int a , b;
    printf("ENTER TWO NUMBER TO SWAP:  ");
    scanf("%d %d", &a ,&b);

    a=a*b;
    b=a/b;
    a=a/b;

 printf("Number After Swap %d %d \n ",a ,b);
    
    a=a+b;
    b=a-b;
    a=a-b;

 printf("Number After Swap %d %d \n ",a ,b);

    return 0;
}
