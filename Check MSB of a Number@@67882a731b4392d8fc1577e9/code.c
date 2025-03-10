// Your code here...
#include <stdio.h>

void checkMSB(int num) {
    // Check if the MSB is set (1)
    if ((num >> (sizeof(num) * 8 - 1)) & 1) {
        printf("set\n");
    } else {
        printf("not set\n");
    }
}

int main() {
    int number = 5;  // Example number
    checkMSB(number);
    
    number = -5;  // Example with a negative number
    checkMSB(number);
    
    return 0;
}
