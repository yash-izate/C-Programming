// Factorial of first n natural numbers.

#include <stdio.h>
int fact(int n);

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);

    if (num< 0)
    {
        printf("Factorial of negative no. doesn't exist\n");
    }
    else
    {
        printf("The factorial of n natural number is %d\n", fact(num)); 
    }
    return 0;
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // int factNm1 = fact(n - 1);
    int factN = n * fact(n-1);
    return factN;
}