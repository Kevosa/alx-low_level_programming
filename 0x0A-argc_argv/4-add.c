#include "main.h"

/**
 * main - prints the sum of positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0, 1 if not a number
 */

int main(int argc, char *argv[])
{
	int x, sum = 0;


	for (x = 1; x < argc; x++)
	{
		if (argv[x][0] < '0' || argv[x][0] > '9')
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);
	return (0);
}
