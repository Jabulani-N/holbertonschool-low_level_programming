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
	list_t *UQHolder = malloc(sizeof(list_t));
	size_t UQNumbers = 0;

	if (UQHolder == NULL)
		return (-1);
	if (h == NULL)
	{
		free(UQHolder);
		/*printf("[0] (nil)");*/
		return (-1);
	}
	*UQHolder = *h;
	while (UQHolder != NULL)
	{
		if (UQHolder->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%i] %s\n", UQHolder->len, UQHolder->str);
		UQNumbers++;
		UQHolder = UQHolder->next;
	}

	free(UQHolder);
	return (UQNumbers);

}

