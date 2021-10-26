#include <stdio.h>
#include <math.h>


void main(void)
{
    float e = 2.718;
    float  x, y;
    float output;
    printf("input x: ");
    scanf("%f", &x);
    printf("input y: ");
    scanf("%f", &y);
    output = 16 * pow(y, 2) + pow(e, x * y) + sqrt(x + 1.51) + log(x * y);
    printf("%f", output);
}