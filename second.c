#include <stdio.h>


int main(void)
{
  int a, b;
  printf("Enter any two number\n");
  scanf("%d %d", &a, &b);
  printf("Sum:%d, multiplication:%d, division:%d, remainder%d\n", a+b, a*b, a/b, a%b);
  return 0;
}
