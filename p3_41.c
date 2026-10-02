#include <stdio.h>

int main() {
    float radius;
    float diameter;
    float circumference;
    float area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}