#include "lists.h"
/**
 * add_dnodeint- Insert new node
 * @head: pointer to the head node
 * @n: the data
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *mem0;

	mem0 = malloc(sizeof(dlistint_t));

	if (mem0 == NULL)
		return (NULL);

	mem0->n = n;
	mem0->prev = NULL;
	mem0->next = *head;

	if (*head != NULL)
		(*head)->prev = mem0;
	*head = mem0;

	return (mem0);
}
