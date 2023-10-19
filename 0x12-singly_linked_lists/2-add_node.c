#include "lists.h"


/**
 * add_node - Add a new node to the beginning of a linked list.
 * @head: Pointer to the head of the list.
 * @str: String data for the new node.
 * Return: Pointer to the new head of the list.
 */



list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t c;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (c = 0; str[c]; c++)
		;

	new->len = c;
	new->next = *head;
	*head = new;

	return (*head);
}
