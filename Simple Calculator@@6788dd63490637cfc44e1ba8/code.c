#include <stdio.h>
int main() {
    int a,b;
    char operator;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d",&b);
    printf("");
    scanf(" %c", &operator); 
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n",a,b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a,b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %d\n",a, b, a / b);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
       
    }

    return 0;
}
