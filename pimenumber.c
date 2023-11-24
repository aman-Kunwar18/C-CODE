#include<stdio.h>
int main()
{
    int num;
    printf("Enter The Number; \n");
    scanf("%d" , &num);
        int flag=0;
    for(int i=2;i<num;i++) {
       if(num%i==0){
           flag =1;
       }
}
if(flag){
        printf("%d is not a prime number ",num);
        }
        else{
        printf("%d is  a prime number ",num);

        }  
}

#include<stdio.h>

int main() {
    int num = 30;

    for (int k = 2; k <= num; k++) {
        int flag = 0;

        for (int i = 2; i <= k / 2; i++) {
            if (k % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag==0) {
            printf("%d is a prime number\n", k);
        }
    }
    return 0;
}

#include<stdio.h>
void main()
{
    int i,j,n;  
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);
    printf("Prime numbers are:-\n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }    
       if(c==2)
        {
            printf("%d ",i);
        }
    }
}





