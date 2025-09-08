#include <stdio.h>
int main() {
    int n = 7;

    // Upper half
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--)    // left stars
            printf("* ");
        for (int j = 0; j < i; j++)    // left spaces
            printf("  ");
        for (int j = 0; j < i; j++)    // right spaces
            printf("  ");
        for (int j = n; j > i; j--)    // right stars
            printf("* ");
        printf("\n");
    }

    // Lower half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)   // left stars
            printf("* ");
        for (int j = n - 1; j > i; j--) // left spaces
            printf("  ");
        for (int j = n - 1; j > i; j--) // right spaces
            printf("  ");
        for (int j = 0; j <= i; j++)   // right stars
            printf("* ");
        printf("\n");
    }

    return 0;
}
