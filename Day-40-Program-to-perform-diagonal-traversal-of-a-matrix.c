// Day-40-Program-to-perform-diagonal-traversal-of-a-matrix

#include <stdio.h>

int main() {
    int r, c, i, j, d, a[10][10];
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) scanf("%d", &a[i][j]);

    for (d = 0; d < r + c - 1; d++) {
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                if (i + j == d) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}