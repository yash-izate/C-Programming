//Name: Yash Izate
//Roll No.: 61

#include <stdio.h>
int main()
{
  int arr[5];

  printf("Enter the array: ");

  for (int j = 0; j < 5; j++)
  {
    scanf("%d", &arr[j]);
  }
  printf("\n list of array element: ");
  for (int i = 0; i < 5; i++)
  {
    printf(" %d ", arr[i]);
  }
  return 0;
}