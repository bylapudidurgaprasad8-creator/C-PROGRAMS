#include <stdio.h>

int main() {
    int A1, A2, A3, B1, B2, B3;
    scanf("%d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);

    int a[3] = {A1, A2, A3};
    int b[3] = {B1, B2, B3};

    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++)
            if (a[j] > a[i]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }

    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++)
            if (b[j] > b[i]) {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }

    int alice = a[0] + a[1];
    int bob = b[0] + b[1];

    if (alice > bob)
        printf("Alice");
    else if (bob > alice)
        printf("Bob");
    else
        printf("Tie");

    return 0;
}

