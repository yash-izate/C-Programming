#include <stdio.h>

int square(int n);

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);

    printf("number = %d\n", square(number));
    return 0;
}

int square(int n)
{
    n = n * n;
    printf("square = %d\n", n);
}