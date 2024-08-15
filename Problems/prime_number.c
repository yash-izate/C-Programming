#include <stdio.h>
int main()
{
    int n, i = 2;
    printf("Enter Your No.");
    scanf("%d", &n);

    while (i <= n / 2)

    {
        if (n % i == 0)
        {
            printf("not prime");
            break;
            i++;
        }
        else
        {
            printf("Given no. is prime");
            break;
        }
    }
    return 0;
}
