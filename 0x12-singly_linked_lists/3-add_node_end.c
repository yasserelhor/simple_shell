#include "lists.h"

/**
 * add_node_end - Add a node to the end of a linked list.
 * @head: Pointer to the head of the list.
 * @str: String data for the new node.
 * Return: Pointer to the head of the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *t;
	size_t c;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (c = 0; str[c]; c++)
		;

	new->len = c;
	new->next = NULL;
	t = *head;

	if (t == NULL)
	{
		*head = new;
	}
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}

	return (*head);
}
