#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: pointer to first node
 * Return: 0
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
