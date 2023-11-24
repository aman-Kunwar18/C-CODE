#include <stdio.h>

int main() {
    int num;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    // Print the number of 2s that divide num
    while (num % 2 == 0) {
        printf("%d ", 2);
        num = num / 2;
    }
    // num must be odd at this point, so a skip of 2 (i = i + 2) can be used
    for (int i = 3; i <= num; i = i + 2) {
        // While i divides num, print i and divide num
        while (num % i == 0) {
            printf("%d ", i);
            num = num / i;
        }
    }
    // If num becomes a prime number greater than 2
    if (num > 2) {
        printf("%d ", num);
    }

    printf("\n");

    return 0;
}
