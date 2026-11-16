// Day-38-Program-to-check-if-a-matrix-is-symmetric

#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;
    int a[10][10];

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric == 1) {
        printf("The matrix is symmetric.\n");
    }
    else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}
