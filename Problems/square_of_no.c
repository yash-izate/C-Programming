// Find square of number given by user.

#include <stdio.h>
#include <math.h>

int main()
{
    float n, result;
    printf("Enter the number : ");
    scanf("%f", &n);

    result = pow(n,2);
    printf("The square of the given no. is %f\n", result);
 
    return 0;
}