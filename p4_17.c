#include <stdio.h>

int main(void)
{
    int i, accountNumber;
    double oldLimit, newLimit, balance;

    // Analyze the credit status of three customers
    for (i = 1; i <= 3; i++)
    {
        // Input customer information
        printf("Enter account number: ");
        scanf("%d", &accountNumber);

        printf("Enter credit limit before recession: ");
        scanf("%lf", &oldLimit);

        printf("Enter current balance: ");
        scanf("%lf", &balance);

        // Reduce the credit limit by half
        newLimit = oldLimit / 2.0;

        // Display the customer's new credit limit
        printf("\nAccount Number: %d\n", accountNumber);
        printf("New Credit Limit: $%.2f\n", newLimit);

        // Check whether the balance exceeds the new limit
        if (balance > newLimit)
        {
            printf("Warning: Current balance exceeds the new credit limit!\n");
        }
        else
        {
            printf("Current balance is within the new credit limit.\n");
        }

        printf("\n");
    }

    return 0;
}