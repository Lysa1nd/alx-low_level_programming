#include "lists.h"

/**
 * pop_listint - erases the head node of a linked list
 * @head: points to the first element in the linked list
 * Return: brings back deleted data
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *past;
	int k;

	if (!head || !*head)
		return (0);
	k = (*head)->n;
	past = (*head)->next;
	free(*head);
	*head = past;
	return (k);
}

