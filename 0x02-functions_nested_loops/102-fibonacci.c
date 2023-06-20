#include <stdio.h>

int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int fib;
	int i;
    
    printf("%d, %d", fib1, fib2);
    
	for (i = 3; i <= 50; i++)
    {
	fib = fib1 + fib2;
	printf(", %d", fib);
	fib1 = fib2;
	fib2 = fib;
	}

	printf("\n");

	return 0;
}
