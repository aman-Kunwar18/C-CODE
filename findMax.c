#include <stdio.h>

int main() {
    int a , b, c, max;
    /*printf("ENTER Three NUMBER   ");
    scanf("%d %d %d", &a ,&b, &c);

    max = (a>b)   ?  (a>c ?a:c)    :   (b>c?b:c);
    printf("Maximam Nuber is %d" , max); */
 
  

a=2;
b=1;
c=4;

max = (b>c   ?  (  b>a ? b: a  )  : ( c>a ? c:a ) ) ; 
  printf("Maximam Nuber is %d" , max);
    return 0;
}

