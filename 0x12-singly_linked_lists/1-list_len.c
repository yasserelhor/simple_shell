#include "lists.h"

/**
 * list_len - Counts nodes in a linked list.
 * @h: Pointer to the list's head.
 * Return: Number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t l;

	l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
