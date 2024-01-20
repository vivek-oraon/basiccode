#include <stdio.h>


int main()
{
  int num;
  printf("Enter any number\n");
  scanf("%d", &num);
  if(num%2==0)
  {
    printf("The number %d is even\n", num);
  }
  else {
    printf("The number %d is odd\n", num);
  }


}
