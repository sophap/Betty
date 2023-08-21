#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node
 * @idx: position the new node
 * @n: new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new->prev = temp;
			new->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		} temp = temp->next;
		count++;
	} free(new);
	return (NULL);
}
