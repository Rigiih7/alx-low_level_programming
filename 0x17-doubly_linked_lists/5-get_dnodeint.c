#include "lists.h"
/**
 * get_dnodeint_at_index - return the node at given index
 * @head: the pointer to the head node
 * @index: the node at given index
 * Return: the direction node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}
