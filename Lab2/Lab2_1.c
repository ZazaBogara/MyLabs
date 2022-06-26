#include <stdio.h>
#include <math.h>

void main(void)
{
    float output;
    float  h,a,b;
    printf("input h: ");
    scanf("%f", &h);
    printf("input a: ");
    scanf("%f", &a);
    printf("input b: ");
    scanf("%f", &b);
    for(float x=a; x<=b; x = x+h)
    {
        float e=2.718;
        if(x<=3)
            {
                output=cos(pow(x,2));
                printf("argument: x: %f; function: %f \n", x, output);            
            }
        if(x>=3 && x<4)
            {
                output=sqrt(pow(x,3)+log10(x));
                printf("argument: x: %f; function: %f \n", x, output);            
            }
        if(x>=4)
            {
                output=1/(tan(pow(x,2)));
                printf("argument: x: %f; function: %f \n", x, output);            ;
            }
    }
}