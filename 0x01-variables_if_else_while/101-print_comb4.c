#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, l, m;
	for (k = 0; l <= 7; k++)
	{
		for (l = k + 1; l <= 8; l++)
		{
			for (m = l + 1; m <= 9; m++)
			{
				putchar(k + '0');
				putchar(l + '0');
				putchar(m + '0');
				if (k != 7 || l != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
