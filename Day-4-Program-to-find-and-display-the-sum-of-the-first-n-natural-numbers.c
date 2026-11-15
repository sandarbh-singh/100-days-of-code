//Program-to-find-and-display-the-sum-of-the-first-n-natural-numbers

#include <stdio.h>

int main() {
    int n;
    long long sum;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    }
    else {
        sum = (long long)n * (n + 1) / 2;
        printf("Sum of first %d natural numbers = %lld\n", n, sum);
    }
    return 0;
}