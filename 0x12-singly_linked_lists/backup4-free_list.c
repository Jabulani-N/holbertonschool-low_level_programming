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

void free_list(list_t *head)
{
	list_t *UQHolder = malloc(sizeof(list_t)), *me = malloc(sizeof(list_t));

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
		return;
	}
	printf("initialized\nabout to UQHolder = head\n");
	UQHolder = head;
	printf("UQHolder is now head\ngonnawhile UQH->next != NULL\n");
	while (UQHolder->next != NULL)
	{ printf("in loop of while UQH->next != NULL\n");
		me = UQHolder->next;
		while (me->next != NULL)
			me = me->next, printf("me just became me->next\n");
/*		free(&(me->str)), free(&(me->len)), free(&(me->next));*/
		printf("about to free me\n");
		free(me);
	} printf("about to free UQHolder's contents and self\n");
/*	free(&(UQHolder->str)), free(&(UQHolder->str)), free(&(UQHolder->len));*/
	free(UQHolder);/*the last free(me) will also free UQHolder becase it shares an address*/

}
/*
 * known issues
 * double free detected
 * 	This means it is destroying data that is pointed to by two things
 *	or that i am trying to free the same address twice
 *
 *	let's try only running the me loop if me can actuall reach UQHolder->next.
 *	shortcutted by makign me = UQHolder-> next, so it'll never free UQHolder
 *	once it stops looping and frees default me,
 *		I have everything I wanted and can happily exit the loop
 *
 *	I looked again, and i'm actually reaching the same positoin twice
 *	the loop isn't reaching different places each time
 *
 *	let's try destroying current before moving to next instead
 */
