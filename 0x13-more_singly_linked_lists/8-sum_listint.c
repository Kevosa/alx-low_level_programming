#include"lists.h"
/**
 * sum_listint - Computes the sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of data (n) of the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum =0;
	listint_t *nextnode = head;


	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while(nextnode != NULL)
		{
			sum = sum + nextnode->n;
			nextnode=nextnode->next;
		}
	}
	return (sum);
}
