/**
 * add_node - receives an address of a list
 * This function will be receiving a list already made.
 * we will put the current head's address as our "next"
 * we will put the length as our "len"
 * we will put str as our "str"
 * @head: the current list head's address
 * @str: data to hold in the
 *Return: address of newly assigned head
 */

#include "lists.h"
#include <string.h>
#include "_strlen.c"

list_t *add_node(list_t **head, const char *str)
{
	list_t *UQHolder = malloc(sizeof(list_t));
	char *strContent = NULL;

/*	printf("made it through initialization\n");*/
	if (UQHolder == NULL)
		return (NULL);
/*	printf("malloc was success\n");*/
/*	if (head == NULL)*/
/*	{*/
/*		free(UQHolder);*/
/*		return (0);*/
/*	}*/
	/*it doesn't matter here if head is null.*/
	/*linked lists end on pointing to NULL anyway*/

	strContent = strdup(str);
/*	printf("succeeded at strdup without breaking\n");*/
/*	printf("strContetnt is now %s\n",strContent);*/
	if (*head)
		UQHolder->next = *head;
	else
		UQHolder->next = NULL;
	UQHolder->/***/str = strContent;
	/*now create a custom strlen*/
	UQHolder->len = _strlen(str);
	return (UQHolder);

}
/*
 * notes
 * strdup already uses malloc, so you should be able to free it directly
 * strdup is required
 */
