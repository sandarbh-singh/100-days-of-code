// Program-to-print-the-horizontal-diamond-star-pattern

#include <stdio.h>

int main() {
    int i, j;
    int max_stars = 9;

    // Upper half including middle row
    for (i = 1; i <= max_stars; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (i = max_stars - 2; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}