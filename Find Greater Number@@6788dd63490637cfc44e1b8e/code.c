#include <stdio.h>
int main() {
    int a,b;
    printf("");
    scanf("%d %d",&a,&b);
    if(a>b || b<a) 
    printf("%d", a);
    else if(b>a || a<b)
    printf("%d", b);
    return 0;
}