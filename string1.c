#include <stdio.h>
#include <string.h>

int main() {
    int countd = 0, countc = 0, flag = 0;
    char str[100]; // Adjust the size accordingly

    printf("Enter the string: ");
    scanf("%s", str);

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            countd++;
        } else {
            countc++;
        }
    }

    if (flag) {
        printf("%s is not a palindrome\n", str);
    } else {
        printf("%s is a palindrome\n", str);
    }

    printf("Digits: %d\n", countd);
    printf("Characters: %d\n", countc);

    return 0;
}
