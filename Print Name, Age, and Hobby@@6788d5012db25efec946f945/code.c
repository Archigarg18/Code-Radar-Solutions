#include <stdio.h>
int main() {
    char str1[100],str2[100];
    int age;
    printf(" ");
    scanf("%c %d %c",&str1,&age,&str2);
    printf("Name: %c",str1);
    printf("Age: %d",age);
    printf("Hobby: %c",str2);
    return 0;
}