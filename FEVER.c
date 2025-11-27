#include <stdio.h>

int main() {
    int X;

    // Read temperature
    scanf("%d", &X);

    // Check if temperature is strictly greater than 98
    if (X > 98) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
