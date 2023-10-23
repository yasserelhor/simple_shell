#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list of integers.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
