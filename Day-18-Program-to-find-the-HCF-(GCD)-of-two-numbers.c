// Program-to-find-the-HCF-(GCD)-of-two-numbers

#include <stdio.h>

int main() {
    int a, b, temp, hcf;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int num1 = a, num2 = b;
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    hcf = num1;

    printf("HCF of %d and %d is %d\n", a, b, hcf);
    return 0;
}