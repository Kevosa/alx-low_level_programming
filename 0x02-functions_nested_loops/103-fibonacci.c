#include <stdio.h>

int main() {
    unsigned int fib1 = 1;
    unsigned int fib2 = 2;
    unsigned int fib_next = 0;
    unsigned int sum = 0;

    while (fib1 <= 4000000) {
        if (fib1 % 2 == 0) {
            sum += fib1;
        }

        fib_next = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_next;
    }

    printf("The sum of even-valued terms in the Fibonacci sequence is: %u\n", sum);

    return 0;
}

