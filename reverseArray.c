#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<num/2;i++){
        int t=arr[i];
        arr[i]=arr[num-1-i];
        arr[num-1-i]=t;
    }
    for(int i=0;i<num;i++){
    printf("%d ",arr[i]);
    }  
}


