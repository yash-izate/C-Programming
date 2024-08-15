#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Number is Positive\n");
        if (num % 2 == 0)
        {
            printf("Number is Even\n");
        }
        else
        {
            printf("Number is Odd\n");
        }
    }
    else if (num < 0)
    {
        printf("Number is Negative\n");
        if (num%2== 0)
        {
            printf("Number is Even\n");
        }
        else
        {
            printf("Number is Odd\n");
        }
    }
    else
    {
        printf("Not Positive, Negative and Even, Odd");
    }
   
    return 0;
}