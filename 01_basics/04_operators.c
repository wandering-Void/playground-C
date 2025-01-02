//demonstrate how Arithmetic, Relational, Logical, and Bitwise Operators work in C 

#include <stdio.h>

int main() {
    
    int a = 10, b = 3;

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("%d > %d is %d\n", a, b, a > b);
    printf("%d < %d is %d\n", a, b, a < b);

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("(a > b) && (b > 0) is %d\n", (a > b) && (b > 0));
    printf("(a > b) || (b < 0) is %d\n", (a > b) || (b < 0));

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("%d & %d = %d\n", a, b, a & b);
    printf("%d | %d = %d\n", a, b, a | b);

    return 0;
}
