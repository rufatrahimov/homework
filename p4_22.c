#include <stdio.h>

int main(void)
{
    int amount;   // Amount in pennies
    int principal = 100000;  // $1000.00 in pennies
    int rate;
    int year;
    int i;

    // Print the table heading
    printf("%4s", "Year");

    for (rate = 5; rate <= 10; rate++)
    {
        printf("%12d%%", rate);
    }

    printf("\n");

    // Calculate compound interest for each year
    for (year = 1; year <= 10; year++)
    {
        printf("%4d", year);

        // Calculate for interest rates from 5% to 10%
        for (rate = 5; rate <= 10; rate++)
        {
            amount = principal;

            // Apply interest one year at a time using integers
            for (i = 1; i <= year; i++)
            {
                amount = amount * (100 + rate) / 100;
            }

            // Display dollars and cents separately
            printf("%10d.%02d", amount / 100, amount % 100);
        }

        printf("\n");
    }

    return 0;
}