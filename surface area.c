#include <stdio.h>

int main() {
    int side;
    scanf("%d", &side);

    int surfaceArea = 6 * side * side;
    int volume = side * side * side;

    printf("Surface area = %d and Volume = %d", surfaceArea, volume);

    return 0;
}

