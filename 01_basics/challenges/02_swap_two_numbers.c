//Challenge 2: Swap two numbers

#include <stdio.h>

int main() {

    //declaring two variables
    int i, j;

    //asking user for two different numbers
    printf("Enter a number(n1):\n");
    scanf("%d", &i);

    printf("Enter a different number(n2):\n");
    scanf("%d", &j);

    //swapping the numbers
    i = i - j;
    j = i + j;
    i = j - i;

    //alternative method
    /*
        i = i * j;
        j = i / j;
        i = i / j;

    */

    //displaying output
    printf("n1 = %d, n2 = %d\n", i, j);

    return 0;
}