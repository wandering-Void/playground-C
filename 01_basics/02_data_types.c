// Demonstrate the datatypes in C

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // Integer types
    char c = 'A';                 // Character
    unsigned char uc = 255;       // Unsigned character
    short s = -32768;             // Short integer
    unsigned short us = 65535;    // Unsigned short integer
    int i = -2147483648;          // Integer
    unsigned int ui = 4294967295; // Unsigned integer
    long l = -9223372036854775807L; // Long integer
    unsigned long ul = 18446744073709551615UL; // Unsigned long integer
    long long ll = -9223372036854775807LL; // Long long integer
    unsigned long long ull = 18446744073709551615ULL; // Unsigned long long integer

    // Floating-point types
    float f = 3.14f;              // Floating-point
    double d = 3.141592653589793; // Double floating-point
    long double ld = 3.141592653589793238462643383279502884L; // Long double

    // Boolean type
    bool b = true;                // Boolean

    // Pointers
    int x = 42;                   // Declare an integer
    int *ptr = &x;                // Pointer to x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Value using pointer: %d\n", *ptr);

    // Printing all data types
    printf("Character: %c\n", c);
    printf("Unsigned character: %u\n", uc);
    printf("Short: %hd\n", s);
    printf("Unsigned short: %hu\n", us);
    printf("Integer: %d\n", i);
    printf("Unsigned integer: %u\n", ui);
    printf("Long: %ld\n", l);
    printf("Unsigned long: %lu\n", ul);
    printf("Long long: %lld\n", ll);
    printf("Unsigned long long: %llu\n", ull);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", d);
    printf("Long double: %Lf\n", ld);
    printf("Boolean: %s\n", b ? "true" : "false");

    return 0;
}
