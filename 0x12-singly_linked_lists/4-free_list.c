#include "lists.h"

/**
 * free_list - Deallocate memory used by a linked list.
 * @head: Pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *c;

	while ((c = head) != NULL)
	{
		head = head->next;
		free(c->str);
		free(c);
	}
}
