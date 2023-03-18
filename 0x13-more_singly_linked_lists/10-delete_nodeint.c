/**
 * delete_nodeint_at_index - inserts a node at index
 * @head: *head is location of head
 *	be sure to check for "head" nad not "*head" being NULL
 * @index: target position. 0 is head.
 * Return: 1
 *	on failure: -1
 */

#include "lists.h"
#include "6-pop_listint.c"
#include "1-listint_len.c"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *frozenTraveler, *holder;

	if (head == NULL)
		return (-1);
	if (index == 0)/*head deletion.*/
	{
		if (pop_listint(head) == 0)
			return (-1);
		return (1);
		/*why do work twice?*/
	}
	frozenTraveler = *head;
	/*if index is fatter than list length, return -1*/
	if (index >= listint_len(*head))
		return (-1);
	while (index > 1)
	{ printf("im in the index > 1 while loop\n");
		if (frozenTraveler->next == NULL)
		{
			/*printf("tried invalid delete location\n");*/
			return (-1);/*tried to delete OOB*/
		}
		frozenTraveler = frozenTraveler->next;
		index--;
	} /*we are now one node before where we want to delete one*/
	/*Whirlygig Shuffle*/
	holder = frozenTraveler->next;/*preserve original next*/
	frozenTraveler->next = (frozenTraveler->next)->next;
		/*take original next's place in line*/
	free(holder);/*delete original next*/
	if (holder == NULL)/*ensure free worked*/
		return (1);
	else
		return (-1);

}
