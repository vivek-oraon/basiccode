#include <stdio.h>


int main(void)
{

  int a, b, largest;
  printf("Enter two number:");
  scanf("%d%d", &a, &b);
  largest = a>b?a:b;
  printf("Largest Number is %d\n", largest);
  return 0;
}
