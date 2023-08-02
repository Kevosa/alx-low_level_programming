#include"lists.h"
/**
 * free_listint2 - Frees a listint_t linked list.
 * @head: Pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;
	listint_t *current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}

