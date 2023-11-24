#include <stdio.h>
int main()
{
    int num;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);
    int n=num;
    int sum=0;
    while(n>0){
       int rem = n%10;
        rem = rem*rem*rem;
        sum = sum+rem;
        n=n/10;
    }
    if(num == sum){
        printf("%d is a armstrong number\n" , num);
    }
    else{
        printf("%d is not  a armstrong number\n" , num);
    }
}

/* #include <stdio.h>

int main() {
    int num;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &num);

    for (int k = 1; k <= num; k++) { // Fix the loop condition
        int n = k;
        int sum = 0;
        
        while (n > 0) {
            int rem = n % 10;
            rem = rem * rem * rem;
            sum = sum + rem;
            n = n / 10;
        }

        if (k == sum) { // Use the original value of k for comparison
            printf("%d is an Armstrong number\n", k);
        }
    }

    return 0;
} */
