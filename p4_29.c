
#include <stdio.h>

int main(void)
{
    int x = 6, y = 3;
    int a = 4, b = 5, g = 5;
    int i = 3, j = 8;

    // a) Check the first pair of expressions
    printf("a) Original: %d\n",
           (!(x < 5) && !(y >= 7)));

    printf("   Equivalent: %d\n",
           ((x >= 5) && (y < 7)));

    // b) Check the second pair of expressions
    printf("b) Original: %d\n",
           (!(a == b) || !(g != 5)));

    printf("   Equivalent: %d\n",
           ((a != b) || (g == 5)));

    // c) Check the third pair of expressions
    printf("c) Original: %d\n",
           (!((x <= 8) && (y > 4))));

    printf("   Equivalent: %d\n",
           ((x > 8) || (y <= 4)));

    // d) Check the fourth pair of expressions
    printf("d) Original: %d\n",
           (!((i > 4) || (j <= 6))));

    printf("   Equivalent: %d\n",
           ((i <= 4) && (j > 6)));

    return 0;
}
