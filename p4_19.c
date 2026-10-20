#include <stdio.h>

int main(void)
{
    int productNumber, quantity;
    double price, total = 0.0;

    // Read product number and quantity until the user enters -1
    printf("Enter product number (1-5) and quantity sold (-1 to finish):\n");

    while (1)
    {
        scanf("%d", &productNumber);

        // Stop entering data when -1 is entered
        if (productNumber == -1)
        {
            break;
        }

        scanf("%d", &quantity);

        // Determine the retail price using switch
        switch (productNumber)
        {
            case 1:
                price = 2.98;
                break;

            case 2:
                price = 4.50;
                break;

            case 3:
                price = 9.98;
                break;

            case 4:
                price = 4.49;
                break;

            case 5:
                price = 6.87;
                break;

            default:
                printf("Invalid product number!\n");
                continue;
        }

        // Add the value of the products sold to the total
        total = total + price * quantity;
    }

    // Display the total retail value
    printf("Total retail value of products sold: $%.2f\n", total);

    return 0;
}