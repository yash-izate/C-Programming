#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d", &age);

    (age >= 18) ? printf("Eligible To Vote\n") : printf("Not Eligible To Vote\n");

    return 0;
}