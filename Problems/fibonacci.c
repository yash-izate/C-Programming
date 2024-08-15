#include <stdio.h>

// Function to display Fibonacci series iteratively
void fibo(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibo(number);
    }

    return 0;
}
