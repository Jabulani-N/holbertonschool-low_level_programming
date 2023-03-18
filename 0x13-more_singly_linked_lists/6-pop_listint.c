/**
 * pop_listint - deletes head
 * @head: *head is address of current head
 * Return: [old] (*head)->n
 *	if we end up with an empty linked list, 0
 */

#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *UQHolder;
	int oldHold;

	if ((*head) != NULL)
	{
		oldHold = (*head)->n;
		UQHolder = (*head)->next;
		free(*head);
		(*head) = UQHolder;
		return (oldHold);
	}
	else
		return (0);
}

