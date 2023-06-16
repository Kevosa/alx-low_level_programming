#include <stdio.h>
/**
 *  main -  prints all possible different combinations of two digits
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	int k;
	int l;

	for (k = 0; k < 9; k++)
	{
		for (l = k + 1; l <= 9; l++)
		{
			putchar(k + '0');
			putchar(l + '0');
			if (k != 8 || l != 9)
			{
				putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

