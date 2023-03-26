
/**
 * get_dnodeint_at_index - prints a node of a linked list
 * @head: address of a node in a dbly linked list
 *	you'll have to naviate to head yourself
 * @index: node requested number (head is 0)
 * Return: requested node
 *	on failure: NULL
 */

#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *hold;

	if (head == NULL)
		return (NULL);

	hold = head;
	while (hold->prev)/*move to head*/
		hold = hold->prev;

	while (index > 0)
	{
		if (!(hold->next))
			return (NULL);
		hold = hold->next;
		index--;
	}
return (hold);
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
