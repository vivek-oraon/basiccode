#include <stdio.h>

int main()

{
	int first, second;
	printf("Enter two years");
	scanf("%d%d",&first, &second);
	for(int i = first; i<second; i++)
	{
		if((i%4==0 && i%100 != 0) || i%400==0)
		{
			printf("%d ",i);
		}
	}
}
