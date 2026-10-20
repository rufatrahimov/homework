#include <stdio.h>

int main(void)
{
    int i, sum = 0;

    // Loop through numbers from 1 to 100
    for (i = 1; i <= 100; i++)
    {
        // Check if the number is a multiple of 7
        if (i % 7 == 0)
        {
            sum = sum + i;
        }
    }

    // Print the sum of all multiples of 7
    printf("Sum = %d\n", sum);

    return 0;
}