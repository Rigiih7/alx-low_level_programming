#include "lists.h"
/**
 * sum_dlistint - returns the sum of the data
 * @head: pointer to the head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
