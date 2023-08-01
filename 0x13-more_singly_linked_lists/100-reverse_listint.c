#include "lists.h"

/**
 * reverse_listint - reversing the linked lists
 * @head: pointer to the first node
 *
 * Return: pointer to the first node of updated list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

