#include "lists.h"
/**
 * add_node - Add a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new node, or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	
	char *duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while(str[length] != '\0')
		length++;

	new_node->next = *head;
	new_node->str = duplicate;
	new_node->len = length;
	
	*head=new_node;
	
	return (new_node);
}



