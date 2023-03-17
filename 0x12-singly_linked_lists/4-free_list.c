/**
 * free_list - receives an address of a list
 * This function will be reading a list already made.
 * @head: the list address in question
 *	this makes *h the contents of that list structure
 *		as a structure,
 *		you'll need to request the exact dataslot you want to interact with
 *we'll need to access the next item in the chain,
 *	and so on, until one equlas NULL
 *Return: the number of linked lists
 *Structurally copied from Task0
 * to utilize the code that loops to the tail
 */

#include "lists.h"
#include <string.h>

void free_list(list_t *head);
{
	list_t *UQHolder = malloc(sizeof(list_t)), me = malloc(sizeof(list_t));

	if (UQHolder == NULL)
		return;
	if (me == NULL)
	{
		free(UQHolder);
		return;
	}
	if (head == NULL)
	{
		free(UQHolder), free(me);
		return (0);
	}
	UQHolder = head;
	while (UQHolder->next != NULL)
	{
		me = UQHolder;
		while (me->next != NULL)
			me = me->next;
		printf("about to free me's stuff");
		free(me->str), free(me->len), free(me->next);
		printf("about to free me itself");
		free(me);
		UQHolder = UQHolder->next;
	} printf("about to free UQHolder's contents and self\n");
	free(UQHolder->str), free(UQHolder->str), free(UQHolder->len);
	free(UQHolder);

}

