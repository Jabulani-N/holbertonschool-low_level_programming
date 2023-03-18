/**
 * add_nodeint - recieves current head and new head's n
 * @head: *head is address of current head
 * @n: goes in the new head's n slot
 * Return: address of newley created head
 *	on failure: NULL
 */


#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlyHead = malloc(sizeof(listint_t));

	if (!(newlyHead))
		return(NULL);

	/*fill new head's data*/
	newlyHead->n=n
	/*make new head point to old head*/
	newlyHead->next = *head;
	/*make the variable "head" point to the newly made head*/
	/*old head's address and data? safely stored in newlyHead->next*/
	*head = newlyHead;
	return(*head);
	/*you'll know it's right when returning head gives newlyHead*/
}

