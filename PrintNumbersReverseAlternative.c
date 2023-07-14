#include <stdio.h>

int main() {
    int number = 100;
    
    // Iterate from 100 to 1, skipping 2 numbers
    while (number >= 1) {
        printf("%d ", number); // Print the current number
        number -= 3; // Decrement the number by 3
    }
    
    return 0;
}
