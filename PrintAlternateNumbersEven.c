#include <stdio.h>

int main() {
    int number = 0;
    
    // Iterate from 0 to 100
    while (number <= 100) {
        printf("%d ", number); // Print the current number
        number += 2; // Increment the number by 2 to get the next even number
    }
    
    return 0;
}
