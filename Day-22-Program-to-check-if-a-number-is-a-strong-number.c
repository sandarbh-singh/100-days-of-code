// Program-to-check-if-a-number-is-a-strong-number

#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0, i, fact;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        remainder = num % 10;

        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == original && original > 0) {
        printf("%d is a Strong number.\n", original);
    }
    else {
        printf("%d is not a Strong number.\n", original);
    }
    return 0;
}