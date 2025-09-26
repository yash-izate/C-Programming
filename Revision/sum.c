#include <stdio.h>

int main()
{

    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    float result = num1 + num2;

    printf("Sum of %f and %f is %f.\n", num1, num2, result);

    return 0;
}