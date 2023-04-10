#include <stdio.h>
#include <math.h>

int is_prime(unsigned long int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    unsigned long int n = 4000013477;
    // printf("Enter a number: ");
    // scanf("%lu", &n);
    if (is_prime(n)) {
        printf("%lu is prime\n", n);
    } else {
        printf("%lu is not prime\n", n);
    }
    return 0;
}