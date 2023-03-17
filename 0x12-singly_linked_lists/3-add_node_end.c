/**
 * add_node_end - receives an address of a list
 * This function will be receiving a list already made.
 * we will scan all the way to it's self-> next = NULL
 * we will put our newly made node as it's self->next
 * "len" and "str" are assigned as previous.
 * @head: the current list head's address
 * @str: data to hold in the
 *Return: address of newly created tail
 *	on failure, NULL
 * don't print here. main file handles that
 */

#include "lists.h"
#include <string.h>
#include "_strlen.c"
#include <stdio.h>

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *UQHolder = malloc(sizeof(list_t)), *traverser;

	if (UQHolder == NULL)
		return (NULL);
	
	UQHolder->str = strdup(str);
/*	printf("successfyk strdup.\nUQHolder->str is now %s\n",UQHolder->str);*/
	/*now create a custom strlen*/
	UQHolder->len = _strlen(UQHolder->str);
/*	printf("assigned len\n");*/
	UQHolder->next = NULL;
	if (*head == NULL)
	{/*just make the new guy and call it head*/
		*head = UQHolder;
		return (UQHolder);
	}
	traverser = *head;

	while (traverser->next != NULL)
	{
		traverser = traverser->next;
/*		printf("traverser has been moved to traverser->next\n");*/
	}
	/*we are now at the tail*/
/*	printf("arrived at tail. about to assign traverser->next = UQHolder\n");*/
	traverser->next = UQHolder;

	return (UQHolder);

}
/*
 * notes
 * strdup already uses malloc, so you should be able to free it directly
 * strdup is required
 */

/*
 * KNOWN ISSUES
 *
 *
 *
 */
