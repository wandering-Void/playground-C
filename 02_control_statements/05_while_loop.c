//demonstrate the use of while-loop
//example: print first N natural numbers

#include <stdio.h>

int main() {

    //decalring count
    int count = 1, n;

    //asking user for input
    printf("Enter a number to print all natural numbers up to it: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d:\n", n);

    //initiating while-loop
    while (count <= n) {
        printf("%d\t", count);
        count++;
    }

    printf("\n");

    return 0;
}
