#include "main.h"
/**
 * print_alphabet_x10 - print ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int k;

	for (k = 1 ; k <= 10 ; k++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
