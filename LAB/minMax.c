#include <stdio.h>
int main(){
int arr[] ={4,3,9,2,0,2};
int max ,min;
max=arr[0];
min=arr[0];
for(int i=0;i<6;i++){
    if(max<arr[i]){
        max = arr[i];
    }
     if(min>arr[i]){
        min = arr[i];
    }
}
printf("max and mix is %d %d ",max,min);

}


