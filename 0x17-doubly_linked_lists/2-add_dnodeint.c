#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to the first node of a list
 * @n: new node to be added
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
