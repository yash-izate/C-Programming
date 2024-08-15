// Find factorial of input given by user

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value to find factorial\n");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);

    return 0;
}