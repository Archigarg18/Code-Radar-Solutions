// Your code here...
#include <stdio.h>
int main() {
    int a,b,result1,result2;
    printf("");
    scanf("%d %d",&a,&b);
    result1 = ~a;
    printf("%.1d",result1);
    result2=~b;
    printf("%.1d",result2);
    return 0;
}