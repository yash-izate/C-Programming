/* Print the even numbers from 0 to n,
if n is given by the user */

#include <stdio.h>
int main()
{
    int i=0, n;
    printf("Enter Your Number\n");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d\n", i); 
        i=i+2;
    }
    return 0;
}