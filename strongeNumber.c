#include <stdio.h>
int facto(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
     fact = fact * i;   
    }
    return fact;
}
int main()
{ 
  int n,num ,sum=0 , fact=1;  
    printf("Enter the 'n' number\n");  
    scanf("%d",&n); 
    num=n;
  while(n>0){      
         int rem= n%10;
         fact = facto(rem);
         n=n/10;
         sum = sum+fact;
    }
    if(sum == num){
        printf("the number is stronge which is %d",sum);        
    }
    else {
        printf("the number is not stronge");
    }
}


/* #include <stdio.h>
int main(){
    int num;
    printf("ENTER THE LIMIT\n");
    scanf("%d" , &num);
for(int k=1;k<=num;k++){
    int n=k;
     int sum=0;
    
    while(n>0){
       
        int rem = n%10;
		int fact=1;
        for(int i=1;i<=rem;i++){
			fact=fact*i;
        }
        sum = sum+fact;
        n=n/10;
    }
    if(sum == k){ 
        printf("the stronge number are :%d\n", sum);
    }
}
}
 */