#include "lists.h"
/**
 * print_listint - prints all the element
 * of a linked list
 * @h: linked list of type to print
 * Return: number of nodes used
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}
	return (j);
}

