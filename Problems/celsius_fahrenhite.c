// write a function to convert celsius to fahrenhite.

#include <stdio.h>
float convert_temp(float celsius);

int main()
{
    float n;

    printf("Enter temperature in celsius : ");
    scanf("%f", &n);
    printf("The temprature in farenhite is %f", convert_temp(n));

    return 0;
}

float convert_temp(float celsius)
{
    float fahrenhite = celsius * (9.0 / 5.0) + 32;
    return fahrenhite;
}