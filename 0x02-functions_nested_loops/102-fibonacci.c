#include <stdio.h>

int main(void)
{
	unsigned long long fib1 = 1;
	unsigned long long fib2 = 2;
	unsigned long long fib;
	int i;
    
    printf("%llu, %llu", fib1, fib2);
    
	for (i = 3; i <= 50; i++)
    {
	fib = fib1 + fib2;
	printf(", %llu", fib);
	fib1 = fib2;
	fib2 = fib;
	}

	printf("\n");

	return 0;
}
