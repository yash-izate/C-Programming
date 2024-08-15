#include <stdio.h>

int main()
{
    int choice, a, b;

    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);

    printf("\nChoose Operator From Below\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exit\n\n");

    printf("Your Response");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        
        printf("Addition is %d\n", a + b);
        break;
    case 2:
        
        printf("Subtraction is %d\n", a - b);
        break;
    case 3:
        
        printf("Multiplication is %d\n", a * b);
        break;
    case 4:
        
        printf("Division is %d\n", a / b);
        break;
    case 5:
        
        printf("Modulus is %d\n", a % b);
        break;
    case 6:
        printf("Thank You\n");
        break;
    default:
        printf("Choose Correct Option\n");
    }

    return 0;
}
