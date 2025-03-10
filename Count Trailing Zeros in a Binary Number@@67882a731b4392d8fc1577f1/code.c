// Your code here...
#include <stdio.h>
int countTrailingZeros(int number) {
    int count = 0;
    if (number == 0) {
        return 0;
    }
    while ((number & 1) == 0) {
        count++;         
        number >>= 1;     
    }
    return count;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = countTrailingZeros(number);
    printf("Number of trailing zeros: %d\n", result);
    return 0;
}
