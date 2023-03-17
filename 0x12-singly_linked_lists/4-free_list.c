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
	list_t *UQHolder;

	if (head == NULL)
		return;
/*	printf("initialized\nabout to UQHolder = head\n");*/
	UQHolder = head;
/*	printf("UQHolder is now head\ngonnawhile UQH->next != NULL\n");*/
	while (head)
	{ /*printf("in loop of while UQH->next != NULL\n");*/
		UQHolder = head;
		head = head->next;
		free(UQHolder->str);
		free(UQHolder);
	} /*printf("gonna free the last UQHolder\n");*/
/*	free(UQHolder->str);*//*no str if i dont exist*/
	free(head);

}
/*
 * known issues
 * double free detected
 *	This means it is destroying data that is pointed to by two things
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
 *		SOLVED - the above solved it. inspired by stackoverflow
 */

/*
 *				notes
 * you have to free the node's string. nothing else.
 */
