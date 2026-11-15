//Program-to-input-a-year-and-check-if-it-is-a-leap-year-or-not-using-conditional-statements.

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf_s("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    }
    else {
        printf("%d is not a Leap Year.\n", year);
    }
    return 0;
}