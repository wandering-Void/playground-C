//demonstrate single line and multi-line comments in C

#include<stdio.h>

int main() {
    
    // This is a single-line comment. It explains the next line of code.
    printf("Comments are ignored by the compiler.\n");

    /*
     * Multi-line comments are useful for
     * providing detailed explanations or 
     * temporarily disabling multiple lines of code.
     */
    printf("They help make the code more readable and maintainable.\n");

    // Uncomment the following line to see how it works:
    // printf("This line is commented out and will not execute.\n");

    return 0;
}