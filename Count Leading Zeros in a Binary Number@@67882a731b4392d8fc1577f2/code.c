// Your code here...
#include <stdio.h>
int countLeadingZeros(int number) {
    int count = 0;
    if (number == 0) {
        return 32;
    }
    for (int i = 31; i >= 0; i--) {
        if ((number >> i) & 1) {
            break;  
        }
        count++; 
    }
    return count;
}
int main() {
    int number;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &number);
    int result = countLeadingZeros(number);
    printf("Number of leading zeros: %d\n", result);
    return 0;
}
