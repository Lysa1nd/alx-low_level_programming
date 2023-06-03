#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a
 * list_t
 * @h: pointer to the head of the linked
 * list
 * Return: the number of elements in a
 * linked list
 */
size_t print_list(const list_t *h)
{
	size_t j;

	while (h->str != NULL)
	{
	if (h->str == NULL)
	{
		printf("[%lu] (nil)n", j);
	}
	else
	{
		printf("[%lu] %sn", j, h->str);
	}
	j++;

	h = h->next;
	}
	return (j);
}
