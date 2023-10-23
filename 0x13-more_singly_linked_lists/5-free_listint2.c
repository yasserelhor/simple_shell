#include "lists.h"

/**
 * free_listint2 - Frees a linked list of integers.
 * @head: A pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}

	*head = NULL;
}
