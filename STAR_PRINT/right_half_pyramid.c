// C program to print right half pyramid pattern of star
#include <stdio.h>

int main()
{   int num;
    printf("Enter The Number\n");
    scanf("%d" ,&num);
    
    for(int i=1;i<=num;i++){
        for(int k=1;k<=i;k++){
            printf("*");
        }   
        printf("\n");
    }

    return 0;
}



// C program to print right half pyramid pattern of 
// alphabets 
#include <stdio.h>

int main()
{   int num;
    printf("Enter The Number\n");
    scanf("%d" ,&num);
    
    for(int i=0;i<=num;i++){
        for(int k=0;k<=i;k++){
            printf("%c",'A'+k);
        }   
        printf("\n");
    }

    return 0;
}

