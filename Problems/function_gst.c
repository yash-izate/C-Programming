#include <stdio.h>
void calculate_price(float final_price);

int main()
{
    float price, final_price;
    printf("Enter the price : ");
    scanf("%f", &price);

    calculate_price(price);

    return 0;
}

void calculate_price(float final_price)
{
    final_price = final_price + (final_price * 0.18);
    printf("Final Price is %f", final_price);
}