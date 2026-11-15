//Program-to-calculate-electricity-bill-based-on-units-consumed

#include <stdio.h>

int main() {
    double units, bill = 0.0;
    printf("Enter units consumed: ");
    scanf("%lf", &units);

    if (units <= 0) {
        printf("Total Bill = ₹0.00\n");
    }
    else if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Total Electricity Bill = ₹%.2lf\n", bill);
    return 0;
}