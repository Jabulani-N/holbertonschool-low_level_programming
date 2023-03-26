
/**
 * delete_dnodeint_at_index - deletes a node of a linked list
 * @head: address of a node in a dbly linked list
 *	you'll have to naviate to head yourself
 * @index: node requested number (head is 0)
 * Return: 1
 *	on failure: -1
 * Modified copy of Task 5's code
 */

#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold;

	if (head == NULL || (*head) == NULL)
		return (1);

	hold = *head;
	while (hold->prev)/*move to head*/
		hold = hold->prev;

	while (index > 0)
	{
		if (!(hold->next))
			return (-1);
		hold = hold->next;
		index--;
	} /*we're now on the node we want to delete*/

	if (hold->next)
		if (hold->prev)/*there is both node sbefore and after*/
			(hold->next)->prev = (hold->prev);
		else/*node after but not before*/
			hold->next->prev = NULL;
	else
		if (hold->prev)/*node before but not after*/
			hold->prev->next = NULL
	/*neither previous nor next is a lone node node in default state*/
				/*it would need no change*/

	/*now remove from history like Abdul Karim's letters*/
	free(hold);
	return (1);
}

/*
 *	notes
 * NULL is a valid list. it is size 0
 */
