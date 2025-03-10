#include <stdio.h>

int main() {
    int number, n, bit_value;
    printf("");
    scanf("%d", &number);
    printf("");
    scanf("%d", &n);
    bit_value = (number >> n) & 1;
    printf("%d\n", bit_value);
    return 0;
}

