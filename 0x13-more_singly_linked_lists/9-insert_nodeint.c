/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: *head is location of head
 *	be sure to check for "head" nad not "*head" being NULL
 * @idx: target position. 0 is head.
 * @n: data for the n slot of inserted node
 * Return: location of craeted inserted node
 *	on failure: NULL
 */

#include "lists.h"
#include "2-add_nodeint.c"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *frozenTraveler, *holder = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (holder == NULL)
		return (NULL);
	if (idx == 0)/*head replacement.*/
		return (add_nodeint(head, n));
		/*why do work twice?*/
	frozenTraveler = *head;
	while (idx > 1)
	{
		if (frozenTraveler->next == NULL)
			return (NULL);/*tried to insert OOB*/
		frozenTraveler = frozenTraveler->next;
		idx--;
	} /*we are now one node before where we want to make one*/
	/*Whirlygig Shuffle*/
	holder->next = frozenTraveler->next;/*preserve original next*/
	frozenTraveler->next = holder;/*take original next's place in line*/
	holder->n = n;
	return (holder);

}
