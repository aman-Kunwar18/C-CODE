#include <stdio.h>
int main()
{
    int arr[3][2];
    int i, j;
    printf("ENTER THE ELEMENT OF THE ARRAY: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {   
            scanf("%d",&arr[i][j]);
            
        }
        
    }
    
// sum of the element in the array:
int sum=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {   
            sum = sum+arr[i][j];//c[i][j]=
            
        }
        
    }
    printf("sum of the array is %d:\n",sum);

// sum of the row

    for (i = 0; i < 3; i++)
    {   int sum=0;
        for (j = 0; j < 2; j++)
        {   
            sum = sum+arr[i][j];
            
        }
        printf("sum of element of %d row  is %d:\n",i,sum);
    }
    
// sum  of the column
 for (j = 0; j < 2; j++)
    {   int sum=0;
        for (i = 0; i < 3; i++)
        { 
            sum = sum+arr[i][j];
            
        }
        printf("sum of element of %d cloumn  is %d:\n",j,sum);
    }
}