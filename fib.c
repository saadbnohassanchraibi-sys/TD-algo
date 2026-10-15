#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int fibonacci(int n) {
    if (n <= 1) return n;
    return naive_fibonacci(n - 1) + naive_fibonacci(n - 2);
}


int dynamic_fibonacci(int n) {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}

void main(){
    int n = 40;
    int r;
    clock_t start, end;

    
    start = clock();
    r = fibonacci(n);
    end = clock();
    double time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Fibonacci(%d) = %d, en secondes\n", n, r, time);

       
    const int REPS = 1000000;
    start = clock();
    for (int i = 0; i < REPS; i++) {
        result = dynamic_fibonacci(n);
    }
    end = clock();
    double dynamic_total = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Fibonacci(%d) = %d, took %f seconds total for %d runs\n",
           n, result, dynamic_total, REPS);
    printf(" (about %f seconds per run)\n", dynamic_total / REPS);

  
}