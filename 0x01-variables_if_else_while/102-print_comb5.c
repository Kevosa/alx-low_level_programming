#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int o, p;
	
	for (o = 0; o <= 99; o++)
	{
		for (p = o; p <= 99; p++)
	{
		putchar((o / 10) + '0');
		putchar((o % 10) + '0');
		putchar(' ');
		putchar((p / 10) + '0');
		putchar((p % 10) + '0');
		if (o != 99 || p != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return 0;
}
