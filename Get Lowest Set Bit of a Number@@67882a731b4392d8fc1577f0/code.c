// Your code here...
#include <stdio.h>
int main() {
    int number;
    printf("");
    scanf("%d", &number);
    int position = number & -number;
    int bit_position = 0;
    while (position > 1) {
        position >>= 1;
        bit_position++;
    }
    printf("%d\n", bit_position);
    return 0;
}
