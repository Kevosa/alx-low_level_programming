#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded).
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int limit = 1024;
	int sum = 0;
	int i;


	for (int i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("The sum of multiples of 3 or 5 below %d is: %d\n", limit, sum);
	return 0;
}
