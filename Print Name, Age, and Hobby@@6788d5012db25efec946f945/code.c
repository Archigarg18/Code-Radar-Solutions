#include <stdio.h>
int main() {
    char str1[100],str2[100];
    int age;
    printf(" ");
    scanf("%s %d %s",&str1,&age,&str2);
    printf("Name:%s\nAge: %d\nHobby: %s",str1,age,str2);
    return 0;
}