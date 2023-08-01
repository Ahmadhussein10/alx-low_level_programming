#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nw;
	listint_t *t = *head;

	nw = malloc(sizeof(listint_t));
	if (nw == 0 || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (!idx)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nw->next = t->next;
			t->next = nw;
			return (nw);
		}
		else
			t = t->next;
	}

	return (0);
}
