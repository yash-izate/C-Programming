/*Write a C progeram to check wheather the dividend is divisible by the divisor*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the Dividend\n");
    scanf("%d", &b);

    printf("Enter the Divisor\n");
    scanf("%d", &a);

    c = b % a;

    if (c == 0)
    {
        printf("%d is divisible by %d\n", b, a);
    }
    else
    {
        printf("%d is not deivisible by %d\n", b, a);
    }

    return 0;
}