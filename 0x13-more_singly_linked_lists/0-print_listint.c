#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list of integers.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
