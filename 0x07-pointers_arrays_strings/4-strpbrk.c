#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1, *p2;

	while (*s != '\0')
	{
		p1 = s;
		p2 = accept;
		while (*p2 != '\0')
		{
			if (*p1 == *p2)
				return (p1);
			p2++;
		}
		s++;
	}

	return ("");
}
