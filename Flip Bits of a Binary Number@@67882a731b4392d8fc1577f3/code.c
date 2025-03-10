// Your code here...
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int flippedNumber = ~number;
    printf("Flipped number: %d\n", flippedNumber);
    return 0;
}
