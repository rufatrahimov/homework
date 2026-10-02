#include <stdio.h>

int main() {
    double totalCollected;
    double sales;
    double countyTax;
    double stateTax;
    double totalTax;
    char month[20];

    while (1) {
        printf("Enter total amount collected (-1 to quit): ");
        scanf("%lf", &totalCollected);

        if (totalCollected == -1) {
            break;
        }

        printf("Enter name of month: ");
        scanf("%s", month);

        /* Calculate sales before tax */
        sales = totalCollected / 1.09;

        /* Calculate county and state sales taxes */
        countyTax = sales * 0.05;
        stateTax = sales * 0.04;

        /* Calculate total sales tax */
        totalTax = countyTax + stateTax;

        printf("Total Collections: $ %.2f\n", totalCollected);
        printf("Sales: $ %.2f\n", sales);
        printf("County Sales Tax: $ %.2f\n", countyTax);
        printf("State Sales Tax: $ %.2f\n", stateTax);
        printf("Total Sales Tax Collected: $ %.2f\n\n", totalTax);
    }

    return 0;
}