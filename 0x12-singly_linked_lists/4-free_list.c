#include "lists.h"
/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}

