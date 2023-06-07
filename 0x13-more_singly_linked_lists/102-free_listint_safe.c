#include "lists.h"

/**
 * free_listint_safe - frees linked list
 * @h: points to node in the linked list
 * Return: number of element in free list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *past;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			past = (*h)->next;
			free(*h);
			*h = past;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}

