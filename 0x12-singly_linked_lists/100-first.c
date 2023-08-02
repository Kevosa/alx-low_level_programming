#include "lists.h"
/**
 * before_main - prints a string before main function
 */
void before_main(void)__attribute__((constructor));
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
