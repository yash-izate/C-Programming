#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter your 1st number \n");
    scanf("%d", &a);
    printf("Enter your 2nd number \n");
    scanf("%d", &b);
    c = a + b;
    printf("Sum is: %d", c);
    if (c <= 18)
    {
        printf("\nNumber is an intege");
    }

    return 0;
}

/*
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Values\n");
    scanf("%d%d", &a, &b);

    printf("The Sum is %d", c = a + b);

    return 0;
}
*/