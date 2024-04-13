#include <stdio.h>
int main()
{

    int arr[3][3];
    int n=3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
// reverse
     for (int i = 0; i < n; i++)
    {  
        for (int j = 0; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][n-1-i];
            arr[i][n-1-i]= temp;
            
        }
        printf("\n");
    }

 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

}