
/**
 * add_dnodeint - adds node to head of a linked list
 * @head: alleged head of a node in a dbly linked list
 *	you'll have to naviate to head yourself
 * Return: the number of nodes in the list
 *	on failure: NULL
 * copied from task1
 *	inherited head-locating
 */

#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *noob = malloc(sizeof(dlistint_t));
	size_t count = 0;

	if (noob == NULL)
		return (NULL);

	if (head == NULL)
	{
		&**head = noob;
		return (noob);
	}


	while (*head->prev)
		*head = *hold->prev;

	*head->prev = noob;
	noob->next = *head;
	noob->prev = NULL;
	*head = noob;/*change address parent funct identifies as head*/
return (*head);
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
