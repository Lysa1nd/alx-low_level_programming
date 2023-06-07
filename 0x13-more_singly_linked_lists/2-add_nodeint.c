#include "lists.h"

/**
 * add_nodeint - adds a current node at
 * the beginning of a linked list
 * @head: points to first node in list
 * @n: insert in that current node
 * Return: point to  current or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;
	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);
	current->n = n;
	current->next = *head;
	*head = current;
	return (current);
}

