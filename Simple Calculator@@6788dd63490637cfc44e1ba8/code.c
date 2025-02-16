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
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n",a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("error\n");
            }
            break;
       
    }

    return 0;
}
