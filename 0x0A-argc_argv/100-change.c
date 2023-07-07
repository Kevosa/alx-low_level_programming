#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number coins to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int d = 0, coins = 0;
	char c[] = "Error";

	if (argc != 2)
	{
		printf("%s\n", c);
		return (1);
	}
	d = atoi(argv[1]);
	while (d >= 25)
	{
		d -= 25;
		coins++;
	}
	while (d >= 10)
	{
		d -= 10;
		coins++;
	}
	while (d >= 5)
	{
		d -= 5;
		coins++;
	}
	while (d >= 2)
	{
		d -= 2;
		coins++;
	}
	if (d == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
