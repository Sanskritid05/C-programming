#include <stdio.h>
#include <math.h>

int sum_of_prime_factors(int N) {
    int sum = 0;

    while (N % 2 == 0) {
        sum += 2;
        N /= 2;
    }

    for (int i = 3; i <= sqrt(N); i += 2) {
        while (N % i == 0) {
            sum += i;
            N /= i;
        }
    }

    if (N > 2) {
        sum += N;
    }

    return sum;
}

int main() {
    int N;
    scanf("%d", &N);  
    printf("%d\n", sum_of_prime_factors(N));

    return 0;
}
