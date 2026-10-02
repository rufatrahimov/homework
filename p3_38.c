#include <stdio.h>

int main() {
    int number;
    int digit;
    int count = 0;

    printf("Enter an integer (5 digits or fewer): ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;

        if (digit == 9) {
            count++;
        }

        number = number / 10;
    }

    printf("Number of 9s: %d\n", count);

    return 0;
}