#include <stdio.h>

int main() {
    unsigned int fib1 = 1;
    unsigned int fib2 = 2;
    unsigned int fib_next = 0;
    int count = 2; 

    printf("%u, %u", fib1, fib2);

    while (count < 98) {
        fib_next = fib1 + fib2;
        printf(", %u", fib_next);

        fib1 = fib2;
        fib2 = fib_next;
        count++;
    }

    printf("\n");

    return 0;
}

