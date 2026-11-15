//Program-to-calculate-library-fine-based-on-late-days

#include <stdio.h>

int main() {
    int days;
    double fine = 0.0;
    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No late days! Fine = ₹0\n");
    }
    else if (days > 30) {
        printf("Membership Cancelled (Late days exceeded 30 days).\n");
    }
    else {
        if (days <= 5) {
            fine = days * 2;
        }
        else if (days <= 10) {
            fine = (5 * 2) + ((days - 5) * 4);
        }
        else {
            fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        }
        printf("Total Library Fine = ₹%.2lf\n", fine);
    }
    return 0;
}