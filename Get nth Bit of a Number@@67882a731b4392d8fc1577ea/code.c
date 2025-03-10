// Your code here...
#include <stdio.h>

int getNthBit(int num, int n) {
    
    return (num >> n) & 1;
}

int main() {
    int number = 29;  
    int n = 3;        

    int bitValue = getNthBit(number, n);

    printf("The value of the %dth bit is: %d\n", n, bitValue);

    return 0;
}
