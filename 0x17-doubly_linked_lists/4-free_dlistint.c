#include "lists.h"
/**
 * free_dlistint - frees the memory
 * @head: pointer to the head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *memory;

	while (head != NULL)
	{
		memory = head->next;
		free(head);
		head = memory;
	}
}
