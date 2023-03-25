
/**
 * add_dnodeint_end - adds node to tail of a linked list
 * @head: alleged head of a node in a dbly linked list
 *	you'll have to naviate to head yourself
 * @n: goes in the n slot of the new node
 * Return: the number of nodes in the list
 *	on failure: NULL
 * copied from task2
 *	inherited framework, but I swapped prev & next
 */

#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *noob = malloc(sizeof(dlistint_t)), *holder;

	if (noob == NULL)
		return (NULL);

	noob->prev = NULL;
	noob->n = n;
	noob->next = NULL;
	if (head == NULL || (*head) == NULL)
	{
		(*head) = noob;
		return (noob);
	}

	holder = (*head);
	while ((*head)->next)
		(*head) = (*head)->next;

	(*head)->next = noob;
	noob->prev = *head;
	(*head) = holder;/*preserve address parent funct identifies as head*/

	return (*head);
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
