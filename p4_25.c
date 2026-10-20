#include <stdio.h>

int main(void)
{
    int decimal, number;
    int binary[8];
    int i, j;

    // Print the table heading
    printf("%-10s %-30s %-10s %-10s\n",
           "Decimal", "Binary", "Octal", "Hexadecimal");

    // Loop through decimal numbers from 1 to 256
    for (decimal = 1; decimal <= 256; decimal++)
    {
        // Convert decimal to binary
        number = decimal;

        for (i = 0; i < 8; i++)
        {
            binary[i] = number % 2;
            number = number / 2;
        }

        // Print decimal number
        printf("%-10d ", decimal);

        // Print binary digits in reverse order
        for (j = 7; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }

        // Print octal and hexadecimal equivalents
        printf("%15o %12X\n", decimal, decimal);
    }

    return 0;
}