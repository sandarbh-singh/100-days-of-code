// Day-40-Program-to-multiply-two-matrices

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k, a[10][10], b[10][10], res[10][10] = { 0 };
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    if (c1 != r2) return printf("Invalid dimensions\n"), 0;

    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++) scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) res[i][j] += a[i][k] * b[k][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}