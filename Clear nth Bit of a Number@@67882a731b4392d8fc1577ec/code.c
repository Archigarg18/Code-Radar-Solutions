// Your code here...
#include <stdio.h>
int main() {
    int number, n;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the bit position (0-based): ");
    scanf("%d", &n);
    int mask = ~(1 << n);
    number = number & mask;
    printf("Updated number: %d\n", number);
    return 0;
}
