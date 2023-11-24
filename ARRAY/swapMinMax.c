#include <stdio.h>
int main()
{
    int arr[5];
    int max=0,min=0;
    printf("Enter The Element: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[max]<arr[i]){
            max=i;
        }
        if(arr[min]>arr[i]){
            min=i;
        }
    }
    int temp = arr[max];
        arr[max]=arr[min];
        arr[min]=temp;
    
    for(int i=0;i<5;i++){
        printf("%d " ,arr[i]);
    }
}