#include <stdio.h>

void do_work(int a, int b, int *sum, int *prod, int *avg);

int main()
{
    int a = 5, b =10;
    int sum, prod, avg;

    do_work(a, b, &sum, &prod, &avg);
    printf("sum = %d\n prod = %d\n avg = %d\n", sum, prod, avg);

    return 0;
}

void do_work(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;

}