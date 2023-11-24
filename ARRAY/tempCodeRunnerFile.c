#include <stdio.h>
int main(){
    int a[5];
    int key;
    printf("Enter the Key\n");
    scanf("%d",&key); 
    for(int i=0;i<5;i++){
        printf("Enter the element in position %d \n",i+1);
        scanf("%d" ,&a[i]);
    }
    for(int j=0;j<5;j++){
        if(key == a[j]){
            printf("The Key Is Persent in %d Position: ",j+1);
            break;
        }
    }
    else{
            printf("NOT FOUND");
}