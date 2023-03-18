/**
 * sum_listint - recieves head of linked list
 *	sums each node's n (it's an int)
 * @head: address of head of linked list
 * Return: sum of nodes in linked list's ns
 *
 * Based on Task0
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


int sum_listint(listint_t *head)
{
	listint_t *holder;
	int total = 0;

	holder = head;
	while (holder)/*so we don't break head for other functions*/
	{
		total += holder->n;
		holder = holder->next;
	}
	return (total);
}
