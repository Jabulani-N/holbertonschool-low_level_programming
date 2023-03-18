/**
 * pop_listint - deletes head
 * @head: *head is address of current head
 * Return: [new] (*head)->n
 *	if we end up with an empty linked list, 0
 */

#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t UQHolder;

	if ((*head) != NULL)
	{
		if ((*head)->next != NULL)
		{
			UQHolder = (*head)->next;
		}
		else
		{
			free(*head);
			return (0);
		}
		free(*head);
		(*head) = UQHolder;
		return ((*head)->n);
	}
	else
		return (0);
}

