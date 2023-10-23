#include "lists.h"

/**
 * sum_listint - Computes the sum of integers in a linked list.
 * @head: A pointer to the head of the list.
 * Return: The sum of integers in the list.
 */

int sum_listint(listint_t *head)
{
	int com = 0;
	listint_t *t = head;

	while (t)
	{
		com += t->n;
		t = t->next;
	}

	return (com);
}
