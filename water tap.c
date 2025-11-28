/*write a c-programme to print the water tap*/
#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int time = (A * B) / (A + B);

    printf("%d", time);

    return 0;
}
