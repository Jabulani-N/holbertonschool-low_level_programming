
/**
 * dlistint_len - counts all nodes of a linked list
 * @h: address of a node in a dbly linked list
 *	you'll have to naviate to head yourself
 * Return: the number of nodes in the list
 *	on failure: EXIT_FAILURE
 * copied from task0, shaving of the printing code
 */

#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *hold;
	size_t count = 0;

	if (h == NULL)
		return (0);

	hold = h;
	while (hold->prev)
		hold = hold->prev;

	while (hold)
	{
		hold = hold->next;
		count++;
	}
return (count);
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
