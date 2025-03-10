#include <stdio.h>

int main() {
    int number, n, bit_value;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the bit position (0-based): ");
    scanf("%d", &n);
    bit_value = (number >> n) & 1;
    printf("%d\n", bit_value);
    return 0;
}

