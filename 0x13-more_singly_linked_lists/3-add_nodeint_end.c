/**
 * add_nodeint_end - gets head and end content
 * @head: *head is head'd address
 * @n: const int to get put into newTail
 * Return: newTail's address.
 *	on failure: NULL
 */


#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newTail = malloc(sizeof(listint_t));
	listint_t *traverser;

	traverser = *head;

	if (!(newTail))
		return (NULL);

	newTail->next = NULL;
	newTail->n = n;

	if (!(traverser))
	{
		*head = newTail;/*BE SURE TO CHANGE HEAD'S ADDRESS SO IT ACCESSES NEW NODE*/
		return (newTail);/*NEXT TIME WE TRY TO USE HEAD (NEWLY MADE NODE)*/
	}

	while (traverser->next != NULL)
		traverser = traverser->next;
	traverser->next = newTail;
	return (newTail);
}

