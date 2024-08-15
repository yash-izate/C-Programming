#include <stdio.h>
int main()
{
  int num;
  printf("Enter Your Number");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    printf("Number is Even");
  }
  else
  {
    printf("Number is Odd");
  }
  return 0;
}