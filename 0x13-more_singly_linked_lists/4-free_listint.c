#include "lists.h"

/**
 * free_listint - to make linked list free
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

