#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter first angle: ");
    scanf("%f", &a);

    printf("Enter second angle: ");
    scanf("%f", &b);

    c = 180 - (a + b);

    printf("Third angle = %.2f", c);

    return 0;
}

