#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (abs(a - b) == 1 || (a == 1 && b == 10) || (a == 10 && b == 1))
        printf("Yes");
    else
        printf("No");

    return 0;
}

