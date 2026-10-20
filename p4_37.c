#include <stdio.h>

int main(void)
{
    int i;

    // Loop through numbers from 1 to 10
    for (i = 1; i <= 10; i++)
    {
        // Print only numbers that are not divisible by 3
        if (i % 3 != 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}