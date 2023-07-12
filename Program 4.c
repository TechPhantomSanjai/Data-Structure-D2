#include <stdio.h>

int main() {
    int number = 100;
    
    // Iterate from 100 to 0
    while (number >= 0) {
        printf("%d ", number); // Print the current number
        number--; // Decrement the number by 1
    }
    
    return 0;
}