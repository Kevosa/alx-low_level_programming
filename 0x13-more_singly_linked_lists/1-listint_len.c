#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Prints integer elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{

		h = h->next;
		count++;
	}
	return (count);
}
