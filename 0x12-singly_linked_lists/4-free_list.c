#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees the
 * list_t list
 * @head: points to the head of linked
 * list
 * Return: the numnber of elements in a
 * linked list
 */
void free_list(list_t *head)
{
	list_t *up_node;

	while (head != NULL)
	{
		up_node = head;
		head = head->next;
		free(up_node);
	}
}

