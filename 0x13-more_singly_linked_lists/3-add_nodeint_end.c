#include "lists.h"

/**
 * add_nodeint_end - adds a node at the
 * end of a linked list
 * @head: points to first element in the
 * list
 * @n: inserts a new element
 * Return: points to the current node or
 * NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *past = *head;

	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);
	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	while (past->next)
		past = past->next;
	past->next = current;
	return (current);
}

