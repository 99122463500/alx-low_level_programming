#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node in the beginning of linked list
 * @head: doubles pointers the list lists
 * @str: new strings add node
 *
 * Return: the address of a new elements, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
