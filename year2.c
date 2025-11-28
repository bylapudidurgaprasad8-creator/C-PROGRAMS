#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    // Get last two digits using modulo
    int lastTwo = year % 100;

    // Print with leading zero if needed
    printf("%02d", lastTwo);

    return 0;
}
