#include <stdio.h>

int main() {
    
    int d = 0;
    int secondNonRepeating = -1; // Initialize to -1 indicating not found
    int arr[] = {4, 4, 5, 6, 7, 9, 8, 9, 7};
    
    for (int i = 0; i < 9; i++) { // Iterate up to the second last element
        printf("%d\n", arr[i]);
    }

    for (int i = 0; i < 9; i++) { // Iterate up to the second last element
        int c = 1;
        
        for (int j = i + 1; j < 9; j++) { // Iterate from the next element
            if (arr[i] == arr[j]) {
                c = 0;
                break; // If a match is found, no need to check further
            } 
        }

        if (c == 1) {
            d++;
            if (d == 2) { // Check for the second non-repeating element
                secondNonRepeating = arr[i];
                break; // No need to check further once the second non-repeating element is found
            }
        }
    }

    if (secondNonRepeating != -1) {
        printf("Second non-repeating element: %d\n", secondNonRepeating);
    } else {
        printf("No second non-repeating element found.\n");
    }

    return 0;
}
