#include <stdio.h>
int main(){
    
    int d=0;
    int sec;
    int arr[]={4,4,5,6,7,9,8,9,7,7};
    for(int i=0;i<10;i++){
    printf("%d\n",arr[i]);
    }

    for(int i=0;i<10;i++){
        int c=1;
        for(int j=i+1;j<10;j++){
          if(arr[i]==arr[j]){
           c=0;
            break;
            } 
        }
        
      if(c==1){
        d++;
         if(d==2){
        printf("index %d that is  %d",i ,arr[i]);
    }
    }
    
   }
}