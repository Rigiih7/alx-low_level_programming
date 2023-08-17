#include "lists.h"
/**
 * delete_dnodeint_at_index - delete nodes at given index
 * @head: pointer to the head
 * @index: the index
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p1, *mem0 = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = mem0->next;
		if (mem0->next == NULL)
			return (-1);
		mem0->next->prev = NULL;
		free(0);
		return (1);
	}

	while (counter < index)
	{
		if (mem0->next == NULL)
			return (-1);
		mem0 = mem0->next;
		counter++;
	}
	mem0->prev->next = mem0->next;
	if (mem0->next)
		mem0->next->prev = mem0->prev;
	if (mem0->next == NULL)
	{
		p1 = mem0->prev;
		p1->next = NULL;
		free(mem0);
		return (1);
	}
	free(mem0);
	return (1);
}
