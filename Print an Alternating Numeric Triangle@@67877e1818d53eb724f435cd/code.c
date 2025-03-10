#include <stdio.h>

void printAlternatingTriangle(int rows) {
    int num = 1;  // Start with the first number (1)
    
    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Move to the next number
        }
        printf("\n");  // New line after each row
    }
}

int main() {
    int rows = 5;  // Number of rows in the triangle
    printAlternatingTriangle(rows);
    return 0;
}

