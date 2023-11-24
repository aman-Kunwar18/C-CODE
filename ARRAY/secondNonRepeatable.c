#include <stdio.h>
int main()
{

    int d = 0;
    int arr[5];
    printf("Enter the array ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
        for (int i = 0; i < 5; i++)
        {
            int c = 1;
            for (int j = 0; j < 5; j++)
            {
                if (j != i && arr[i] == arr[j])
                {
                    c = 0;
                    break;
                }
            }

            if (c == 1)
            {
                d++;
                if (d == 2)
                {
                    printf("index %d that is  %d", i, arr[i]);
                }
            }
        }
    }
