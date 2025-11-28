#include <stdio.h>
#include <stdlib.h>   // for abs()

int main() {
    int x, y;

    // Input two integers x and y
    scanf("%d %d", &x, &y);

    // Height is the maximum of absolute values of x and y
    int height = abs(x) > abs(y) ? abs(x) : abs(y);

    // Output the height
    printf("%d", height);

    return 0;
}
h
