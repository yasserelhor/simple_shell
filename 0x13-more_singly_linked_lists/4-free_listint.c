#include "lists.h"

/**
 * free_listint - Frees memory used by a linked list of integers.
 * @head: A pointer to the head of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
