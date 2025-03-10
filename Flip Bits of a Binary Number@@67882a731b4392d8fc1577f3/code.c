// Your code here...
#include <stdio.h>
int main() {
    int number;
    printf("");
    scanf("%d", &number);
    int flippedNumber = ~number;
    printf("%d\n", flippedNumber);
    return 0;
}
