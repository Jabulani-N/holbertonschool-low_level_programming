
/**
 * sum_dlistint - counts all nodes of a linked list
 * @head: address of a node in a dbly linked list
 *	you'll have to naviate to head yourself
 * Return: sum of n values
 *	on failure: 0
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
		count += hold->n;
		hold = hold->next;
	}
return (count);
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
