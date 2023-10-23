#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * Return: A pointer to the new head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL;
	listint_t *tal = NULL;

	while (*head)
	{
		tal = (*head)->next;
		(*head)->next = pr;
		pr = *head;
		*head = tal;
	}

	*head = pr;

	return (*head);
}
