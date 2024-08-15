#include <stdio.h>
int main()
{
    float income, tax;
    
    printf("Enter your income\n");
    scanf("%f", &income);

    if (income < 250000)
    {
        printf("Payable Tax is 0");
    }
    else if (income >= 250000 && income <= 500000)
    {
        tax = (income - 250000) * 0.05;
        printf("Your payable tax is %f\n", tax); 
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = ((income - 250000) * 0.05) + ((income - 500000)*0.2);
        printf("Your payable tax is %f\n", tax);
    }
    else if (income > 1000000)
    {
        tax = ((income - 250000) * 0.05) + ((income - 500000)*0.2) + ((income - 1000000)*0.3);
        printf("Your payable tax is %f\n", tax);
    }

    return 0;
    
}