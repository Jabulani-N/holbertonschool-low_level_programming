/**
 * print_list - receives an address of a list
 * This function will be reading a list already made.
 * @h: the list address in question
 *	this makes *h the contents of that list structure
 *		as a structure,
 *		you'll need to request the exact dataslot you want to interact with
 *we'll need to access the next item in the chain,
 *	and so on, until one equlas NULL
 *Return: the number of linked lists
 */

#include "lists.h"
#include <string.h>

size_t print_list(const list_t *h)
{

	size_t UQNumbers = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		UQNumbers++;
		h = h->next;
	}

	return (UQNumbers);

}

