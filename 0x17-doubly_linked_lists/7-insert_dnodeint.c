#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a node at given index
 * @h: pointer to the head
 * @n: the data
 * @idx: index to insert the new node at
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mem0, *mem1 = *h;
	
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (mem1 == NULL)
			return (NULL);
		mem1 = mem1->next;
	}

	if (mem1->next == NULL)
		return (add_dnodeint_end(h, n));

	mem0 = malloc(sizeof(dlistint_t));

	if (mem0 == NULL)
		return (NULL);

	mem0->n = n;
	mem0->next = mem1->next;
	mem0->prev = mem1;
	mem1->next->prev = mem0;
	mem1->next = mem0;

	return (mem0);
}
