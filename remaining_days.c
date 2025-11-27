#include <stdio.h>

int main() {
    int D;
    scanf("%d", &D);

    int years = D / 365;
    int remaining_days = D % 365;
    int weeks = remaining_days / 7;

    printf("%d\n", years);
    printf("%d", weeks);

    return 0;
}
