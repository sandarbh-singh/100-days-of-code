// Program-to-find-the-digit-that-occurs-the-most-times-in-an-integer-number

#include <stdio.h>

int main() {
    long long num, temp;
    int count[10] = { 0 };
    int i, remainder, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num > 0 ? num : -num;

    if (temp == 0) {
        count[0]++;
    }

    while (temp > 0) {
        remainder = temp % 10;
        count[remainder]++;
        temp /= 10;
    }

    for (i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit occurring the most times is %d (Occurred %d times).\n", maxDigit, count[maxDigit]);
    return 0;
}