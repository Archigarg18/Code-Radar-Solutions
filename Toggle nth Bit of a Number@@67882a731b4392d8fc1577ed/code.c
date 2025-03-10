// Your code here...
#include <stdio.h>
int main() {
    int number, n;
    printf("");
    scanf("%d", &number);
    printf("");
    scanf("%d", &n);
    int mask = 1 << n;
    number = number ^ mask;
    printf("%d\n", number);
    return 0;
}
