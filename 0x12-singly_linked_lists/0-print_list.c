#include "lists.h"

/**
 * print_list - Prints the contents of a linked list
 * @h: A pointer to the head of the list
 *
 * This function traverses the linked list starting from the head node and prints
 * each node's string value and its length. If the string is NULL, it prints "(nil)".
 *
 * @return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}
	return (c);
}
