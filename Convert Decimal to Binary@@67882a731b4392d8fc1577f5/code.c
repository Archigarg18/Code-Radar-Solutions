#include <stdio.h>
void printBinary(int number) {
    if (number == 0) {
        printf("0\n");
        return;
    }
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
    printf(" ");
    scanf("%d", &number);

    printf("");
    printBinary(number);
    return 0;
}

