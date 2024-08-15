// Write a program to check for prime number

#include <stdio.h>
int main()
{
    int num;

    printf("Enter number: \n");
    scanf("%d", &num);

    for(int i; i <= num-1; i++)
    {
        if(num%i != 0)
        {
            printf("Prime\n");
        }
        else if(num%i == 0)
        {
            printf("Not Prime\n");
        }
    }
    return 0;
} 