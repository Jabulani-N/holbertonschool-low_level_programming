/**
 * get_nodeint_at_index - notices index'th node
 * @head: *head is address of current head
 * @index: which node to get. 0 means head
 * Return: index'th node (first node is #0)
 *	on unreal node, return NULL
 */
/*
 * reduce index until index=0, then return self.
 * dont have to alter index on head call, as its already 0
 */
#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *frozenTraveler;

	if (head == NULL)
		return (NULL);

	frozenTraveler = head;
	while (index < 0)
	{
		if frozenTraveler->next != NULL
			frozenTraveler = frozenTraveler->next;
		else/*asked ot go past existing nodes*/
			return (NULL);
		index--;
	}
	return (frozenTraveler);
}
