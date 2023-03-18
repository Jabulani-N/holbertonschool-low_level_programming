/**
 * free_listint - frees linked list
 * @head: head of linked list
 * Return: to nothingness
 */


void free_listint(listint_t *head)
{
	listint_t *scapegoatWax;

	while (head)
	{
		scapegoatWax = head;
		head = head->next;
		free(scapegoatWax);
	}
}

