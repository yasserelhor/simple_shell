#include "lists.h"

/**
 * print_listint_safe - Prints elements of a linked
 * list and checks for loops.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t = NULL;
	const listint_t *l = NULL;
	size_t la = 0;
	size_t n;

	t = head;
	while (t)
	{
		printf("[%p] %d\n", (void *)t, t->n);
		la++;
		t = t->next;
		l = head;
		n = 0;
		while (n < la)
		{
			if (t == l)
			{
				printf("-> [%p] %d\n", (void *)t, t->n);
				return (la);
			}
			l = l->next;
			n++;
		}
		if (!head)
			exit(98);
	}
	return (la);
}
