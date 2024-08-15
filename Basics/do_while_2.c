/* Keep taking numbers from user until user enters
 a number which is multiple of 7 */
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter the number : ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 7 == 0)
        {
            break;
        }

    } while (1);

    printf("7 x %d = %d\n", n / 7, n / 7 * 7);
}
