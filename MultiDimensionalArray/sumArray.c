#include <stdio.h>
int main()
{
    int arr[3][3];
    int i, j;
    printf("ENTER THE ELEMENT OF THE ARRAY: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {   
            scanf("%d",&arr[i][j]);
            
        }
        
    }
    printf("Matrix is:\n");
     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {   
            printf("%d\t",arr[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");
// sum of the element in the array:
int sum=0;


    for (i = 0; i < 3; i++)
    {   int sum1=0;
        int sum2=0;
        for (j = 0; j < 3; j++)
        {   
            sum = sum+arr[i][j];//c[i][j]=
            sum1 = sum1+arr[i][j];
            sum2 = sum2+arr[j][i];
           
        }
         printf("sum of the row %d is: %d\n",i,sum1);
         printf("sum of the col %d is: %d\n",j,sum2);
        
    }
    printf("sum of the array is %d:\n",sum);    
}