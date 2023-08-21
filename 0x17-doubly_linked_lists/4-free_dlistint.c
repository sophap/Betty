#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to the first node
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		dlistint_t *ptr = temp;

		temp = temp->next;
		free(ptr);
	}
}
