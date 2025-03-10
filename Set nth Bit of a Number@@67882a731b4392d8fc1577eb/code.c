// Your code here...
#include <stdio.h>
int main() {
    int number, n;
    printf("");
    scanf("%d", &number);
    printf("");
    scanf("%d", &n);
    number = number | (1 << n);
    printf("%d\n", n, number);
    return 0;
}
