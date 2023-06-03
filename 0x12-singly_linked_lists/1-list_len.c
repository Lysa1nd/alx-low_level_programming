#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns number of
 * elements in a linked list
 * @h: pointer to head of the linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
