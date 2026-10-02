#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three nonzero integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a * a + b * b == c * c ||
        a * a + c * c == b * b ||
        b * b + c * c == a * a) {
        
        printf("The numbers could be the sides of a right triangle.\n");
    } else {
        printf("The numbers could not be the sides of a right triangle.\n");
    }

    return 0;
}