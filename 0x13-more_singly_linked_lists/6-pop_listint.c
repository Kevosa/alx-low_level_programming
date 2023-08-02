#include "lists.h"
/**
 * pop_listint - Removes and returns the data of the head node.
 * @head: Pointer to a pointer to the head of the list.
 * Return: Data (n) of the removed head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int data = 0;

	if (*head == NULL)
	{
		return (0);
	}

	else
	{
		old_head = *head;
		data = old_head->n;
		*head = (*head)->next;
		free(old_head);
	}
	return (data);
}


