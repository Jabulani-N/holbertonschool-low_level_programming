/**
 * print_listint - recieves head of linked list
 *	prints each node's n (it's an int)
 * @h: address of head of linked list
 * Return: number of nodes in linked list
 *
 * Printf is permitted
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


size_t print_listint(const listint_t *h)
{
	listint_t *holder;
	size_t count = 0;

	holder = h;
	while (holder)/*so we don't break head for other functions*/
	{
		printf("%i\n", holder->n);
		count++;
		holder = holder->next;
	}
	return (count);
}
