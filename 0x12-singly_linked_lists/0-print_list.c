#include "lists.h"

/**
 * print_list - Print elements of a linked list.
 * @h: A pointer to the head of the list.
 * Return: Number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
