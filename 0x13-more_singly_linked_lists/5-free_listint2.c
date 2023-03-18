/**
 * free_listint2 - frees linked list
 * @head: head of linked list
 * Return: to nothingness
 */

#include "lists.h"

void free_listint2(listint_t *head)
{
	listint_t *scapegoatWax;

	while (head)
	{
		scapegoatWax = head;
		head = head->next;
		free(scapegoatWax);
	}
}

