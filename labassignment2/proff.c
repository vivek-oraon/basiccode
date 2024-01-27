#include <stdio.h>
#define pi 3.14
#include <math.h>
int main()
{
	int ans = pow(sin(45*(pi/180)), 2) + pow(cos(45*(pi/180)),2);
	int ans1 = pow(1/cos(45*(pi/180)), 2) - pow(tan(45*(pi/180)),2);
	int ans2 = pow(1/sin(45*(pi/180)), 2) - pow(1/tan(45*(pi/180)),2);
	printf("Sin^2(45 degree) + cos^2(45 degree) = %d\n", ans);	
	printf("sec^2(45 degree) - tan^2(45 degree) = %d\n", ans1);	
	printf("cosec^2(45 degree) - cot^2(45 degree) = %d\n", ans2);	
	



}
