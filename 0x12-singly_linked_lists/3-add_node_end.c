#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new node, or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length = 0;
	list_t *current;
	list_t *new_node = malloc(sizeof(list_t));
	char *duplicate;

	if (new_node == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->str = duplicate;
	new_node->len = length;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}

