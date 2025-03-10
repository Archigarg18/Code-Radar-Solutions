// Your code here...
#include <stdio.h>
void printBinary(int number) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1); 
    int leadingZero = 1;
    for (int i = 0; i < sizeof(int) * 8; i++) {
        if ((number & mask) == 0) {
            if (leadingZero) {
                mask >>= 1; 
                continue;
            }
            printf("0");
        } else {
            leadingZero = 0;
            printf("1");
        }
        mask >>= 1; 
    }
    printf("\n");
}
int main() {
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    printf("Binary representation: ");
    printBinary(number);
    return 0;
}
