// Day-39-Program-to-find-the-sum-of-main-diagonal-elements-for-a-square-matrix

#include <stdio.h>

int main() {
    int n, i, j, a[10][10], sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) sum += a[i][j];
        }
    printf("Diagonal Sum = %d\n", sum);
    return 0;
}