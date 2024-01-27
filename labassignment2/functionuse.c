#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int a, b;
printf("Enter a and b");
scanf("%d %d", &a, &b);
printf("a mod b:%d \n", a%b);
printf("Square root of a: %f and b: %f\n",sqrt(a), sqrt(b));
printf("Power of example 10^2 : %f\n", pow(10,2));
printf("log2(32): %f, log10(100): %f\n", log2(32), log10(100));
printf("abs value of -22:%d:\n", abs(-22));
printf("epx of 1:%f\n", exp(1));

}
