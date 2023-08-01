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

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", list->len, list->str);
		count++;
		h=h->next;
	}
	return (count);
}
