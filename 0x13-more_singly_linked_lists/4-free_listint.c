#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: listint_t to be free
 */
void free_listint(listint_t *head)
{
	listint_t *past;

	while (head)
	{
		past = head->next;
		free(head);
		head = past;
	}
}

