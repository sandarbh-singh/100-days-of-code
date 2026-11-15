// Series-Calculation-1

#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    if (n >= 1) {
        sum += 1.0;
        for (i = 2; i <= n; i++) {
            double numerator = 2 * i - 1;
            double denominator = 2 * i;
            sum += numerator / denominator;
        }
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);
    return 0;
}