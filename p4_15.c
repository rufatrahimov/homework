#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal = 1000.0;
    double amount;
    double rate;
    int year;

    // Print the table heading
    printf("%-10s", "Year");

    // Print interest rates from 5% to 10%
    for (rate = 5.0; rate <= 10.0; rate++)
    {
        printf("%10.0f%%", rate);
    }

    printf("\n");

    // Calculate compound interest for each year
    for (year = 1; year <= 10; year++)
    {
        printf("%-10d", year);

        // Calculate amount for each interest rate
        for (rate = 5.0; rate <= 10.0; rate++)
        {
            amount = principal * pow(1.0 + rate / 100.0, year);
            printf("%10.2f", amount);
        }

        printf("\n");
    }

    return 0;
}