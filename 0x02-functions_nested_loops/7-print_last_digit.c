#include "main.h"
#include <stdio.h>




int print_last_digit(int r)
{
	if (r<0)
	{
		r=-r
	}
	
	int c=(r%10);
	if (c<0)
	{
		c=-c
	}
	printf("%d" , c);
	return c;
}
