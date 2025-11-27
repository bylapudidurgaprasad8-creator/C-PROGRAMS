#include <stdio.h>

int main() {
    int num1, num2;
    float avg;

    // Taking two integers as input
    scanf("%d %d", &num1, &num2);

    // Calculating average
    avg = (num1 + num2) / 2.0;

    // Printing result with 2 decimal places
    printf("Average of %d and %d is: %.2f", num1, num2, avg);

    return 0;
}
