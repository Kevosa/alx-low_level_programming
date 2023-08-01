#include "lists.h"
/**
 * list_len - prints a linked list
 *
 * @h: head of the linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		
		
		count++;
		
		current = current->next;
	}
	return (count);
}
