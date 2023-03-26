
/**
 * print_dlistint_backward - prints all nodes of a linked list
 * @h: address of a node in a dbly linked list
 *	you'll have to naviate to head yourself
 * Return: the number of nodes in the list
 *	on failure: EXIT_FAILURE
 * basically straight copied from task 0
 */

#include "lists.h"

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *hold;
	size_t count = 0;

	if (h == NULL)
		return (0);

	hold = h;
	while (hold->next)
		hold = hold->next;

	while (hold)
	{
		printf("%i\n", hold->n);
		hold = hold->prev;
		count++;
	}
return (count);
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
