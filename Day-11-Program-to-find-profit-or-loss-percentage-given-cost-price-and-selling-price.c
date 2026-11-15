//Program-to-find-profit-or-loss-percentage-given-cost-price-and-selling-price.

#include <stdio.h>

int main() {
    double cost_price, selling_price, diff, percentage;
    printf("Enter Cost Price: ");
    scanf("%lf", &cost_price);
    printf("Enter Selling Price: ");
    scanf("%lf", &selling_price);

    if (cost_price <= 0) {
        printf("Cost Price must be greater than zero.\n");
        return 0;
    }

    if (selling_price > cost_price) {
        diff = selling_price - cost_price;
        percentage = (diff / cost_price) * 100.0;
        printf("Profit = ₹%.2lf\n", diff);
        printf("Profit Percentage = %.2lf%%\n", percentage);
    }
    else if (cost_price > selling_price) {
        diff = cost_price - selling_price;
        percentage = (diff / cost_price) * 100.0;
        printf("Loss = ₹%.2lf\n", diff);
        printf("Loss Percentage = %.2lf%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }
    return 0;
}