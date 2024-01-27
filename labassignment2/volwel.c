#include <stdio.h>

int main()

{
char ch[10] = "aeiouAEIOU", b;
int flag = 1;
printf("Enter your character to check for vowel: ");
scanf("%c",&b);
for(int i =0;i<10;i++)
{
	if(b==ch[i])
	{
		printf("%c is a vowel\n", b);
		flag = 1;
		break;
	}
	else{
		flag = 0;
	}
}
if(flag==0)
{
	printf("%c is not vowel\n",b);
}
}
