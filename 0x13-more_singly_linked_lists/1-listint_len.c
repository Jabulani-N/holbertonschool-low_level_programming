/**
 * listint_len - recieves head of linked list
 * @h: address of head of linked list
 * Return: number of nodes in linked list
 */

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


size_t listint_len(const listint_t *h)
{
	const listint_t *holder;
	size_t count = 0;

	holder = h;
	while (holder)/*so we don't break head for other functions*/
	{
		count++;
		holder = holder->next;
	}
	return (count);
}
