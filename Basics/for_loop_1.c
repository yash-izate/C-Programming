#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d\n", i * n);
    }

    return 0;
}