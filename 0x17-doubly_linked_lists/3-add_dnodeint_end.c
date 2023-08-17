#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the tail
 * @head: pointer to of the head
 * @n: the data
 * Return: pointer to  the tail node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *memz, *last_dir;

	memz = malloc(sizeof(dlistint_t));

	if (memz == NULL)
		return (NULL);

	memz->n = n;
	memz->next = NULL;
	memz->prev = NULL;
	if (*head == NULL)
	{
		*head = memz;
		return (memz);
	}
	last_dir = *head;

	while (last_dir->next != NULL)
		last_dir = last_dir->next;
	last_dir->next = memz;
	memz->prev = last_dir;

	return (memz);
}
