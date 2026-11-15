//Program-to-classify-a-triangle-as-Equilateral-Isosceles-or-Scalene-based-on-its-side-lengths

#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter lengths of 3 sides: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check triangle inequality theorem first
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }
    return 0;
}