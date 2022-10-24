#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first element
 * @idx: position to insert the new node
 * @n: value of new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr1;

	ptr = *head;
	ptr1 = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr1->n = n;
	ptr1->next = NULL;

	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr1->next = ptr->next;
	ptr->next = ptr1;
	return (ptr->next);
}
