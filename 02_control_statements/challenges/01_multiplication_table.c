//challenge: generates the multiplication table for a user-defined number using a loop

#include<stdio.h>

int main() {

    int i, j, n;

    //asking user for a number
    printf("Enter a number to generate table: ");
    scanf("%d", &n);

    //initiating the loop
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, (n * i));
    }

    return 0;
}