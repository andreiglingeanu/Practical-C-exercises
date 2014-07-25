#include <stdio.h>

int main(void)
{
    int width = 3;
    int height = 5;

    printf("Area      = %d\n", width * height);
    printf("Perimeter = %d\n", 2 * width + 2 * height);

    float w = 6.8;
    float h = 2.3;

    printf("Area      = %.3f\n", w * h);
    printf("Perimeter = %.3f\n", 2 * w + 2 * h);

    return 0;
}

