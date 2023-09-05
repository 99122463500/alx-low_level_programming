#include "lists.h"

/**
 * listint_len - return numbers of elements on linked lists
 * @h: linked lists of type listing to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
