/*       *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *  */

#include <stdio.h>
int main(){
    int row;
    printf("Enter The Number Of Row\n");
    scanf("%d",&row);
    int i=1;
    int star = 2*i-1;
    int space = row-1;
    for(i=1;i<=row;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        space-=1;
        for(int k=1;k<=star;k++){
            printf("*");
        }
        star+=2;
        printf("\n");
    }
}
