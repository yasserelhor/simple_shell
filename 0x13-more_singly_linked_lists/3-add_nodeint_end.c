#include "lists.h"

/**
 * add_nodeint_end - Adds a new node with
 * an integer to the end of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer to be added to the new node.
 * Return: A pointer to the new head of the list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ljadid;
	listint_t *t = *head;

	ljadid = malloc(sizeof(listint_t));
	if (!ljadid)
		return (NULL);

	ljadid->n = n;
	ljadid->next = NULL;

	if (*head == NULL)
	{
		*head = ljadid;
		return (ljadid);
	}

	while (t->next)
		t = t->next;

	t->next = ljadid;

	return (ljadid);
}
