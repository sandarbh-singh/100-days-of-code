//Program-to-print-the-product-of-even-numbers-from-1-to-n

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;
    int found_even = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
        found_even = 1;
    }

    if (found_even) {
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    }
    else {
        printf("No even numbers in the range 1 to %d.\n", n);
    }
    return 0;
}