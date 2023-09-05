#include "lists.h"

/**
 * pop_listint - delete head node on linked list
 * @head: pointer to first elements in linked list
 *
 * Return: inside the element the data was deleted,
 * or 0 on the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
