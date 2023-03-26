
/**
 * sum_dlistint - counts all nodes of a linked list
 * @h: address of a node in a dbly linked list
 *	you'll have to naviate to head yourself
 * Return: the number of nodes in the list
 *	on failure: EXIT_FAILURE
 * copied from task1, repurposing count
 */

#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *hold;
	int count = 0;

	if (head == NULL)
		return (0);

	hold = head;
	while (hold->prev)
		hold = hold->prev;

	while (hold)
	{
		hold = hold->next;
		count += hold->n;
	}
return (count);
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
