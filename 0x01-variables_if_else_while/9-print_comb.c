#include <stdio.h>

void print_combinations(int n) {
    if (n > 9) {
        return;
    }
    
    putchar(n + '0');
    
    if (n < 9) {
        putchar(',');
        putchar(' ');
    }
    
    print_combinations(n + 1);
}

int main() {
    print_combinations(0);
    
    return 0;
}

