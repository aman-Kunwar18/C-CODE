#include <stdio.h>
int main(){
    int a[7];
    int key;
    int count=0;
    
    for(int i=0;i<7;i++){
        printf("Enter the element in position %d \n",i+1);
        scanf("%d" ,&a[i]);
    }
    printf("Enter the Key\n");
    scanf("%d",&key); 
    for(int j=0;j<7;j++){
        if(key == a[j]){
            printf("The Key Is Persent in %d Position: ",j+1);
            // for finding index use "j" only but for position use "J+1" 
            count++;
            break;// don't use break if multiple occurrence present in an array:
        }
    }
    if(count==0){
        printf("NOT FOUND!!");
    }
    
}

// Q2: Occurrence of the element in Array?  
/* #include <stdio.h>
int main(){
    int a[7];
    int key;
    int count=0;
    
    for(int i=0;i<7;i++){
        printf("Enter the element in position %d \n",i+1);
        scanf("%d" ,&a[i]);
    }
    printf("Enter the Key\n");
    scanf("%d",&key); 
    for(int j=0;j<7;j++){
        if(key == a[j]){
            count++;
        }
    }
   if(count!=0)
        printf("COUNT OF %d is %d: ",key ,count);
   else
        printf("NOT FOUND>> !!");

   
    
} */