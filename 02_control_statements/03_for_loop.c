//demonstrate the use of for-loop to iterate a fixed numbers of times
//example: print numbers from 1 to N

#include<stdio.h>

int main() {

    //declaring variables
    int i, n;

    //asking user for a number
    printf("Enter a number to print all natural numbers up to it: ");
    scanf("%d", &n);

    //starting for-loop
    for(i = 1; i <= n; i++) {
        printf("%d\t", i);
    }

    printf("\n");

    return 0;
}