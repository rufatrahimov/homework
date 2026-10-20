#include <stdio.h>

int main(void)
{
    int n, number, sum = 0;
    int i;
    float average;

    // Read the number of integers to be entered
    scanf("%d", &n);

    // Read each integer and calculate the sum
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &number);
        sum = sum + number;
    }

    // Calculate the average
    average = (float)sum / n;

    // Display the sum and average
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}