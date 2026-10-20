#include <stdio.h>

int main(void)
{
    int n, i;
    int sum = 0, sumSquares = 0, sumCubes = 0;

    // Ask the user to enter a number
    printf("Enter a natural number: ");
    scanf("%d", &n);

    // Calculate the sum, sum of squares, and sum of cubes
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
        sumSquares = sumSquares + i * i;
        sumCubes = sumCubes + i * i * i;
    }

    // Display the results
    printf("Sum = %d\n", sum);
    printf("Sum of squares = %d\n", sumSquares);
    printf("Sum of cubes = %d\n", sumCubes);

    return 0;
}