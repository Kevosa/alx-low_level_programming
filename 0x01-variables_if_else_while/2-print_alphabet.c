#include<stdio.h>
/**
 * main - print all alphabet letters in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter,'\n');
	}
return (0);
}
