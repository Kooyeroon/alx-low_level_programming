#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a required position
 * @head: first node
 * @index: position to be returned
 *
 * Return: pointer to the node at required position
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

