
/**
 * dlistint_len - counts all nodes of a linked list
 * @head: *head is address of alleged head of  dbly linked list
 *	you'll have to naviate to head yourself
 * Return: nothnig
 *
 * copied from task1, for its convenient navigation
 */

#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder;

	if (head == NULL || (*head) == NULL)
		return;

	while ((*head)->prev)
		(*head) = (*head)->prev;

	while (*head)
	{
		holder = (*head);
		(*head) = (*head)->next;
		free(holder->n);
		free(holder);
	}
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
