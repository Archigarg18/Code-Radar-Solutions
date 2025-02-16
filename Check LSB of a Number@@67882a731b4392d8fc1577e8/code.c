// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("");
    scanf("%d", &num);

    // Check the LSB (Least Significant Bit)
    if (num & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
