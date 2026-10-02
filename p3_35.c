#include <stdio.h>

int main() {
    int binary;
    int decimal = 0;
    int place = 1;
    int digit;

    printf("Enter a binary number (5 digits or fewer): ");
    scanf("%d", &binary);

    while (binary > 0) {
        digit = binary % 10;
        decimal = decimal + digit * place;
        place = place * 2;
        binary = binary / 10;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}