//Program-to-calculate-the-factorial-of-a-number

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers does not exist.\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
    return 0;
}