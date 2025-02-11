#include <stdio.h>
int main() {
    int a,b;
    printf("");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("First");
    else if(a<b)
    printf("Second");
    else
    printf("Equal");
    return 0;
}