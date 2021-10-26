#include<stdio.h>
#include<math.h>

void main(void)
{
double a,b,h,x,y,d,s;
int n;
printf("input a= "); 
scanf("%lf",&a);
printf("input b= "); 
scanf("%lf",&b);
printf("input h= ");
scanf("%lf",&h);
printf("input d= ");
scanf("%lf",&d);
for(x=a;x<b;x=x+h)
{ 
    n=0;
    s=0;
    do
    {
        y=pow((x-1),(2*n+1))/((2*n+1)*pow((x+1),(2*n+1)));
        s=s+y;
        n=n+1;
    }
    while(fabs(y)>d);
    printf("\n x=%lf s=%lf",x,2*s);
}
}