#include "lists.h"
/**
 * reverse_listint - reverses a linked
 * list
 * @head: points to the node in the list
 * Return: pointsto the node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = past;
		past = *head;
		*head = next;
	}
	*head = past;
	return (*head);
}

