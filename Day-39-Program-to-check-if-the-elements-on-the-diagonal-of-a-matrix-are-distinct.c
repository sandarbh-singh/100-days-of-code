// Day-39-Program-to-check-if-the-elements-on-the-diagonal-of-a-matrix-are-distinct

#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;
    int a[10][10];

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Compare each main diagonal element a[i][i] with every other a[j][j]
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct == 1) {
        printf("Diagonal elements are distinct.\n");
    }
    else {
        printf("Diagonal elements are not distinct.\n");
    }
    return 0;
}