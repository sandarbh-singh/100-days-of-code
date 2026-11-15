// Program-to-check-if-a-number-is-a-palindrome
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original < 0) {
        printf("%d is not a Palindrome (negative numbers are not palindromes).\n", original);
    }
    else if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    }
    else {
        printf("%d is not a Palindrome.\n", original);
    }
    return 0;
}