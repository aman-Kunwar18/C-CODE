#include <stdio.h>
int main(){
int arr[3][3];
    printf("Enter The Element:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("THE MATRIX IS :\n");
     for ( int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    int sum =0;
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if( i==j || i+j == 2){
                sum = sum+arr[i][j];
            }else {
                printf("  "); // To maintain the matrix structure
            }
        }
        
    }
    printf("The sum of diagonal is %d .....",sum);
}