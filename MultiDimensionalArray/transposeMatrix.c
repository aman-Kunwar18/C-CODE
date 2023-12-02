#include <stdio.h>
int main()
{
    int arr[3][3];
    int transposeMatrix[3][3];
    printf("Enter The Element:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("THE MATRIX IS :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposeMatrix[j][i] = arr[i][j];
        }
        printf("\n");
    }
        printf("The Transpose of the Matrix is..\n");
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           
            printf("%d\t", transposeMatrix[i][j]);
        }
        printf("\n");
    }
}