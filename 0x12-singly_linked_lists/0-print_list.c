#include "list.h"
/**
 * print_list - prints a linked list
 *
 * @h: head of the linked list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h);
{
	int count = 0;
	const list_t *current=h

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		
		else
			printf("[%d] %s\n", current->len, current->str);
		
		count++;
		
		current = current->next;
	}
	return (count);
}
