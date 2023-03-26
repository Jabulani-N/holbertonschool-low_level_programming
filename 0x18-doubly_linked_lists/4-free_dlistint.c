
/**
 * free_dlistint - counts all nodes of a linked list
 * @head: address of alleged head of  dbly linked list
 *	you'll have to naviate to head yourself
 * Return: nothnig
 *
 * copied from task1, for its convenient navigation
 */

#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;

	if (head == NULL)
		return;

	while ((head)->prev)
		(head) = ((head)->prev);

	while (head)
	{
		holder = (head);
		(head) = ((head)->next);
		free(holder);
	}
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
