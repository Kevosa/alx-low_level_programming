#include "lists.h"


void free_list(lists_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while(current)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}

