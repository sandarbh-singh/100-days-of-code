//  Displaying Sum, Difference, Product, and Quotient.

#include <stdio.h>

int main() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("Sum = %.2lf\n", a + b);
    printf("Difference = %.2lf\n", a - b);
    printf("Product = %.2lf\n", a * b);

    if (b != 0) {
        printf("Quotient = %.2lf\n", a / b);
    }
    else {
        printf("Quotient = Division by zero is undefined.\n");
    }
    return 0;
}
