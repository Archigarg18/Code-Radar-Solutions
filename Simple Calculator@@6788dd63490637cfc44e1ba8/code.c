#include <stdio.h>

int main() {
    double a,b;
    char operator;
    printf("");
    scanf("%lf", &a);
    printf("");
    scanf(" %c", &operator); 
    printf("");
    scanf("%lf",&b);
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n",a,b, a + b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a,b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%.2lf / %.2lf = %.2lf\n",a, b, a / b);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
