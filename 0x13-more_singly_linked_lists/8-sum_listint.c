#include "lists.h"
/**
 * sum_listint - calculates the sum of
 * list
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int k = 0;
	listint_t *past = head;

	while (past)
	{
		k += past->n;
		past = past->next;
	}
	return (k);
}

