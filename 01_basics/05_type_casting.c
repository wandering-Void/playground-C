//demonstrate implicit and explicit type casting in C to convert one data type to another

#include <stdio.h>

int main() {
    
    // Implicit type casting
    int integerVal = 10;
    float floatVal = integerVal; // int to float (implicit)
    printf("Implicit Casting: int (%d) to float (%.2f)\n", integerVal, floatVal);

    // Explicit type casting
    float floatNumber = 5.75;
    int integerNumber = (int)floatNumber; // float to int (explicit)
    printf("Explicit Casting: float (%.2f) to int (%d)\n", floatNumber, integerNumber);

    // Mixed type arithmetic
    int a = 7, b = 2;
    float result = (float)a / b; // Explicitly casting to float for division
    printf("Mixed Arithmetic: %d / %d = %.2f\n", a, b, result);

    return 0;
}
