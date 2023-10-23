#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * with an integer at a given index.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The integer to be added to the new node.
 * Return: The address of the new node or NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t jad;
	listint_t *t = *head;

	jad = malloc(sizeof(listint_t));
	if (!jad || !head)
		return (NULL);

	jad->n = n;
	jad->next = NULL;

	if (idx == 0)
	{
		jad->next = *head;
		*head = jad;
		return (jad);
	}

	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			jad->next = t->next;
			t->next = jad;
			return (jad);
		}
		else
			t = t->next;
	}

	return (NULL);
}
