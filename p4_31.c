#include <stdio.h>

int main(void)
{
    int i, j;

    // Print the upper half of the diamond
    for (i = 1; i <= 5; i++)
    {
        // Print leading spaces
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Print the lower half of the diamond
    for (i = 4; i >= 1; i--)
    {
        // Print leading spaces
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}