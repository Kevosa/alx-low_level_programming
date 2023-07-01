#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @number: The integer to compute the absolute value of
 *
 * Return: The absolute value of the integer
 */
int _abs(int number)
{

	if (number < 0)
	{
		return (-number);
	}
	else
	{
		return (number);
	}
}
