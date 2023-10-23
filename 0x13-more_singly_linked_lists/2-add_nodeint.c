#include "lists.h"

/**
 * add_nodeint - Adds a new node with an integer
 * to the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer to be added to the new node.
 * Return: A pointer to the new head of the list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *jadid;

	jadid = malloc(sizeof(listint_t));
	if (!jadid)
		return (NULL);

	jadid->n = n;
	jadid->next = *head;
	*head = jadid;

	return (jadid);
}
