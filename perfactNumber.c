#include <stdio.h>
int main()
{
    int num,sum=0;
   printf("Enter The Number : \n");
   scanf("%d" ,&num);
   for(int i=1;i<num;i++){
   int rem = num % i;
    if(rem==0){
        sum = sum+i;
    }
        
   }
   if(num == sum){
            printf("the number is perfact ");        }
        else{
            printf("the number is not perfact ");
        }
}

/* #include <stdio.h>
int main()
{
    int num, rem,n, sum, i;
 
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(num=1;num<n; num++){
            sum=0;
    for (i = 1; i < num; i++)
    {
        
        rem = num % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        printf("%d is perfect number\n", num);
    }
} */