#include<stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
	int digit;

	for (digit = 0 ; digit <= 9 ; digit++)
	{
		putchar('0' + digit);
	}
	for (digit = 'a' ; digit <= 'f' ; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
		return (0);
}
