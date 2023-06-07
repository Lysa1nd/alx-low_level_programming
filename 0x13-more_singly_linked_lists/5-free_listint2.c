#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: points to the list freed
 */
void free_listint2(listint_t **head)
{
	listint_t *past;

	if (head == NULL)
		return;

	while (*head)
	{
		past = (*head)->next;
		free(*head);
		*head = past;
	}
	*head = NULL;
}

