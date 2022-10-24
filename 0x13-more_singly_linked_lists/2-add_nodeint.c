#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to first element
 * @n: element of the list
 * Return: address to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;
	ptr->next = NULL;

	if (ptr == NULL)
		return (NULL);

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
