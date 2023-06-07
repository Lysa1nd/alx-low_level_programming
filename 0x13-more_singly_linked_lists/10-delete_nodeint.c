#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: points to the element in list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *past = *head;
	listint_t *new = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(past);
		return (1);
	}

	while (m < index - 1)
	{
		if (!past || !(past->next))
			return (-1);
		past = past->next;
		m++;
	}
	new = past->next;
	past->next = new->next;
	free(new);
	return (1);
}

