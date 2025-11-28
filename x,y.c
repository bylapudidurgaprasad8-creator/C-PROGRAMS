// C Program to
// Swap two numbers
// No Extra Space
#include <stdio.h>

int main()
{

    int x = 30;
    int y = 50;

    printf("x: %d , y: %d\n", x, y);

    // x hold 60
    x = x + y;
    
    // y hold 50
    y = x - y;
    
    // Now, x hold 60
    x = x - y;

    printf("x: %d , y: %d\n", x, y);

    return 0;
}
