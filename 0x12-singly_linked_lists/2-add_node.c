#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the begining of a list
 * @head: pointer to the address of the first element
 * @str: struct variable
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
