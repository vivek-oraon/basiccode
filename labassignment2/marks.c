#include <stdio.h>

int main()

{
int marks1, marks2, marks3, marks4, marks5 ;
float percentage;
printf("Enter marks of five subjects:" );
scanf("%d%d%d%d%d", &marks1, &marks2, &marks3, &marks4, &marks5);
percentage = (marks1+marks2+marks3+marks4+marks5)/5;
	if(percentage<25)
	{
		printf("F");
	}
	else if(percentage>=25 && percentage<45)
	{
		printf("E");
	}
	else if(percentage>=45 && percentage<50)
	{
		printf("D");
	}
	else if(percentage>=50  && percentage<60)
	{
		printf("C");
	}
	else if(percentage>=60  && percentage<80)
	{
		printf("B");
	}
	else if(percentage>=80)
	{
		printf("A");
	}
}
