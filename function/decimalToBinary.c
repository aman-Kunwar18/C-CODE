#include <stdio.h>
void decimalToBinary(int num){
    if (num!=0)
    {
        decimalToBinary(num/2);
        printf("%d",num%2);        
    }  
}
int main(){
    int num;
    printf("Enter The Number\n");
    scanf("%d",&num);
    decimalToBinary(num);
}

