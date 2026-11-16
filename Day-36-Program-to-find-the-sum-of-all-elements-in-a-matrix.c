// Day-36-Program-to-find-the-sum-of-all-elements-in-a-matrix

#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    int a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}