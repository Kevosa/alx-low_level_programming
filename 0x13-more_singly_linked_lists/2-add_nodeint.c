#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer value for the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}
