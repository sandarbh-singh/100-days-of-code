// Program-to-find-the-product-of-odd-digits-of-a-number

#include <stdio.h>

int main() {
    int num, temp, remainder, product = 1, hasOdd = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num > 0 ? num : -num;

    while (temp != 0) {
        remainder = temp % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits = %d\n", product);
    }
    else {
        printf("No odd digits found.\n");
    }
    return 0;
}