#include <stdio.h>
unsigned long long factorial(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}
int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    unsigned long long fact = factorial(n);
    if (fact == 0 && n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is: %llu\n", n, fact);
    }
    return 0;
}

