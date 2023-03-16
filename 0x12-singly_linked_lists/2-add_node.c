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

list_t *add_node(list_t **head, const char *str)
{
	list_t *UQHolder = malloc(sizeof(list_t));
	size_t UQNumbers = 0;
	char *strContent;

	if (UQHolder == NULL)
		return (-1);
/*	if (head == NULL)*/
/*	{*/
/*		free(UQHolder);*/
/*		return (0);*/
/*	}*/
	/*it doesn't matter here if head is null.*/
	/*linked lists end on pointing to NULL anyway*/
	*UQHolder->next = *head;
	*UQHolder->*str = str;
	/*now create a custom strlen*/
	*UQHolder->len = _strlen(str);
	return (UQHolder);

}
/*
 * notes
 * strdup already uses malloc, so you should be able to free it directly
 * strdup is required
 */
