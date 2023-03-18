/**
 * free_listint2 - frees linked list
 * @head: head of linked list
 * Return: to nothingness
 *
 * must set head to null
 * pretty sure mine was NULL already from my adder funct
 */

#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *scapegoatWax, *traverser;

	traverser = *head;
	while (traverser)
	{
		scapegoatWax = traverser;
		traverser = traverser->next;
		free(scapegoatWax);
	}
	*head = NULL;
}

