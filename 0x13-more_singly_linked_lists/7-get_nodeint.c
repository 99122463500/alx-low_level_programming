#include "lists.h"

/**
 * get_nodeint_at_index - return node at a index on a link list
 * @head: first node on a link list
 * @index: index of a node to return
 *
 * Return: pointer no the node we observing for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
