#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    /* if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("VOWEL\n");
        } else {
            printf("CONSONANT\n");
        }
    } else {
        printf("NOT CHARACTER\n");
    } */

switch(ch){

case 'a':
    printf("vowel");
    break;
case 'e':
    printf("vowel");
    break;
case 'i':
    printf("vowel");
    break;
case 'o':
    printf("vowel");
    break;    
case 'u':
    printf("vowel");
    break;

case 'A':
    printf("vowel");
    break;
case 'E':
    printf("vowel");
    break;
case 'I':
    printf("vowel");
    break;
case 'O':
    printf("vowel");
    break;    
case 'U':
    printf("vowel");
    break; 
case '1' ... '9':
      printf("this is number");
      break;
   default:
   printf("consonent"); 
}

    return 0;
}
