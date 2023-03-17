/**
 * add_node - receives an address of a list
 * This function will be receiving a list already made.
 * we will put the current head's address as our "next"
 * we will put the length as our "len"
 * we will put str as our "str"
 * @head: the current list head's address
 * @str: data to hold in the
 *Return: address of newly assigned head
 *
 * turns out you're also supposed to print it, I think
 * don't print here. main file handles that
 */

#include "lists.h"
#include <string.h>
#include "_strlen.c"

list_t *add_node(list_t **head, const char *str)
{
	list_t *UQHolder = malloc(sizeof(list_t));
	char *strContent;

/*	printf("made it through initialization\n");*/
	if (UQHolder == NULL)
		return (NULL);
/*	printf("malloc was success\n");*/

	if (!(str))
		strContent = (NULL);
	else
		strContent = strdup(str);
/*	printf("succeeded at strdup without breaking\n");*/
/*	printf("strContetnt is now %s\n",strContent);*/

	UQHolder->next = &**head;

	UQHolder->str = strContent;
	/*now create a custom strlen*/
	UQHolder->len = _strlen(str);

/*	print_list(UQHolder);*/
/*	printf("print_list inside the add_node funciton succeeded\n");*/

	*head = UQHolder;
		/*i've changed address of shared structure head to be what we just made*/
		/* this means whoever called this funct can still get the head*/
		/*	by searching the same struct name as before*/
	 
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
