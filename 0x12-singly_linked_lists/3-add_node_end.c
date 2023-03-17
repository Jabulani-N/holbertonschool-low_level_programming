/**
 * add_node_end - receives an address of a list
 * This function will be receiving a list already made.
 * we will scan all the way to it's self-> next = NULL
 * we will put our newly made node as it's self->next
 * "len" and "str" are assigned as previous.
 * @head: the current list head's address
 * @str: data to hold in the
 *Return: address of newly created tail
 *
 * don't print here. main file handles that
 */

#include "lists.h"
#include <string.h>
#include "_strlen.c"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *UQHolder = malloc(sizeof(list_t)), *traverser = mallco(sizeof(list_t));
	char *strContent;

/*	printf("made it through initialization\n");*/
	if (UQHolder == NULL)
		return (NULL);
/*	printf("malloc was success\n");*/
	if (traverser == NULL)
	{
		free(UQHolder);
		return (NULL);
	}

	if (!(str))
		strContent = (NULL);
	else
		strContent = strdup(str);
/*	printf("succeeded at strdup without breaking\n");*/
/*	printf("strContetnt is now %s\n",strContent);*/

	UQHolder->next = NULL;

	UQHolder->str = strContent;
	/*now create a custom strlen*/
	UQHolder->len = _strlen(str);

/*	print_list(UQHolder);*/
/*	printf("print_list inside the add_node funciton succeeded\n");*/

	*traverser = **head;
	while (traverser->next != NULL)
		traverser = traverser->next;
	/*we are now at the tail*/
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
 *			SOLVED - it was not changing the "head" address to new head
 *			need to do this so "head" always means real head
 * it is not preservng the previous entry
 *	when you print_list it, it only prints the one item
 * print_list is known properly funciotnal to print entire linked list
 *
 * this means it is not properly linking to the previous address to be next
 *
 *
 */
