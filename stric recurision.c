#include <stdio.h>

int findMax(int arr[], int i, int n) {
    if (i == n - 1) return arr[i];
    int m = findMax(arr, i + 1, n);
    return (arr[i] > m) ? arr[i] : m;
}

int main() {
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    printf("%d", findMax(arr, 0, 3));
    return 0;
}

