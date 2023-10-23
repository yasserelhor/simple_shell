#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specified index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted.
 * Return: 1 if successful, -1 if the node doesn't exist.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *c = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (i < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		i++;
	}


	c = t->next;
	t->next = c->next;
	free(c);

	return (1);
}
