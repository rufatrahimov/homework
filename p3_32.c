#include <stdio.h>

int main() {
    int size;
    int i, j;

    printf("Enter the side size of the square (1-20): ");
    scanf("%d", &size);

    if (size >= 1 && size <= 20) {
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= size; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("Please enter a size between 1 and 20.\n");
    }

    return 0;
}