// Program-to-swap-the-first-and-last-digit-of-a-number

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp, swappedNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    temp = num;

    while (temp != 0) {
        digits++;
        firstDigit = temp;
        temp /= 10;
    }

    if (digits == 1) {
        swappedNum = num;
    }
    else {
        int power = pow(10, digits - 1);
        int middleDigits = (num % power) / 10;
        swappedNum = (lastDigit * power) + (middleDigits * 10) + firstDigit;
    }

    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}