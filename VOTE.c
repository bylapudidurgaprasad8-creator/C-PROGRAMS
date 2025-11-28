#include <stdio.h>

int main() {
    int X;

    // Read age
    scanf("%d", &X);

    // Check voting eligibility (age must be 18 or above)
    if (X >= 18) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
