/*Write a C program to calculate simple intrest.*/

#include <stdio.h>
int main()
{
    float principal, rate, time, simple_intrest;
    printf("Enter Principal Amount, Rate of intrest, Time\n");
    scanf("%f%f%f", &principal, &rate, &time);

    simple_intrest = (principal * rate * time) / 100;
    printf("The Simple Intrest on the Principal Amount is %f\n", simple_intrest);

    float total_amount = simple_intrest + principal;
    printf("Total amount to be paid is %f\n", total_amount);
    return 0;
}