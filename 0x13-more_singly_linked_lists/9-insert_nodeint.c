#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a
 * current node
 * @head: points first node in the list
 * @idx: index where the node is added
 * @n: insert in the current node
 * Return: points to the node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *current;
	listint_t *past = *head;

	current = malloc(sizeof(listint_t));
	if (!current || !head)
		return (NULL);
	current->n = n;
	current->next = NULL;

	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}

	for (l = 0; past && l < idx; l++)
	{
		if (l == idx - 1)
		{
			current->next = past->next;
			past->next = current;
			return (current);
		}
		else
			past = past->next;
	}
	return (NULL);
}

