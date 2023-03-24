
/**
 * print_dlistint - prints all nodes of a linked list
 * @h: address of a node in a dbly linked list
 *	you'll have to naviate to head yourself
 * Return: the number of nodes in the list
 *	on failure: EXIT_FAILURE
 */

#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *hold;
	size_t count = 0;

	if (h == NULL)
		return (EXIT_FAILURE);

	hold = h;
	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
return (count);
}

