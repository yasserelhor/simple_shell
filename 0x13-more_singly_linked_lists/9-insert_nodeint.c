#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *jad;
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
