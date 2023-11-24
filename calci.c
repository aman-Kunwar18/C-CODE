#include <stdio.h>
int main(){

double a,b,res;
char ch;
printf("ENTER THE OPERATOR:\n");
scanf("%c" ,&ch);
printf("ENTER THE TWO NUMBER:\n");
scanf("%lf %lf" , &a ,&b);


switch(ch){

    case '+':
        res =a+b;
        break;
    case '-':
        res =a-b;
        break;
    case '*':
        res =a*b;
        break;        
    case '/':
        res =a/b;
        break;
    default:
        printf("Invaild Operation! ");
}
    printf("%.2lf %c %.2lf = %.2lf \n" ,a ,ch,b,res );
}