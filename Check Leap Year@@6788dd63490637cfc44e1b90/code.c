#include <stdio.h>
int main() {
    int a;
    printf("");
    scanf("%d",&a);
    if(a%4 && a!%100)
    printf("Leap Year");
    else
    printf("Not a Leap Year");
    return 0;
}