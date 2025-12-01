#include <stdio.h>

int max(int a, int b) {
    if (a > b) return a;
    return b;
}

int max3(int a, int b, int c) {
    if (c == -1000000000)   // dummy value not needed, but recursion uses two at a time
        return max(a, b);
    return max(a, max(b, c));
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ans = max(max(a, b), c);
    printf("%d", ans);
    return 0;
}

