#include <stdio.h>

int main(void)
{
    int number, value;

    // Roman numeral values
    int values[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Decimal\tRoman Numeral\n");
    printf("----------------------\n");

    for (number = 1; number <= 100; number++)
    {
        value = number;

        printf("%d\t", number);

        // Convert decimal number to Roman numeral
        for (int i = 0; i < 9; i++)
        {
            while (value >= values[i])
            {
                printf("%s", symbols[i]);
                value -= values[i];
            }
        }

        printf("\n");
    }

    return 0;
}