#include "lists.h"

/**
 * pop_listint - to delete head node
 * @head: pointer to the first node
 *
 * Return: the data in side the node
 * or 0 if empty
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

