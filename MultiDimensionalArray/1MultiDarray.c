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

    for (i = 0; i < 3; i++)
    {   printf("{");
        for (j = 0; j < 2; j++)
        { 
            printf("%d,",arr[i][j]);
       
        }
        printf("}");
    }
}