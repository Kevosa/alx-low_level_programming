#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */
/**
 * main - print last digit of n
 *
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	k = n % 10;

	printf("Last digit of %d is %d ", n, k);

	if (k > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (k == 0)
	{
	printf("and is 0\n");
	}
	else
	{
	printf("and is less than 6 and not 0\n");
	}
	return (0);
	}
