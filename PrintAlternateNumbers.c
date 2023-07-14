#include <stdio.h>

int main() {
    int number = 1;
    
    // Iterate from 1 to 99
    while (number <= 99) {
        printf("%d ", number); // Print the current number
        number += 2; // Increment the number by 2 to get the next odd number
    }
    
    return 0;
}
