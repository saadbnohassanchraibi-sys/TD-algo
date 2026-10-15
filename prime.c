#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int primes(int n) {
    int count = 0;
    for (int k = 2; k < n; k++) {
        int is_prime = 1;
        for (int d = 2; d * d <= k; d++) {
            if (k % d == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) count++;
    }
    return count;
}


int sieve_primes(int n) {
    int count = 0;
    char *is_prime = malloc(n);
    for (int i = 0; i < n; i++) is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;

    for (int k = 2; k < n; k++) {
        if (is_prime[k]) {
            count++;
            for (int mu = k * 2; mu < n; m += k) {
                is_prime[m] = 0;
            }
        }
    }
   
    return count;
}
    

void main() {
    int n = 10000000;
    clock_t start, end;

    start = clock();
    int c1 = primes(n);
    end = clock();
    printf("%d primes below %d, en %f secondes\n",
           c1, n, (double)(end - start) / CLOCKS_PER_SEC);

    start = clock();
    int c2 = sieve_primes(n);
    end = clock();
    printf("Sieve: %d primes below %d, en %f secondes\n",
           c2, n, (double)(end - start) / CLOCKS_PER_SEC);

  
}