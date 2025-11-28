#include <stdio.h>

int main() {
    int X;

    // Input ticket cost
    scanf("%d", &X);

    // Total cost for 4 tickets
    int total_cost = 4 * X;

    // Check if total cost does not exceed 1000
    if (total_cost <= 1000) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

