#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds nodes at the end
 * of the linked list
 * @head: points the head of the linked
 * list
 * @str: string
 * Return: the address of a new element
 * in the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current1_node, *last_node;

	current1_node = malloc(sizeof(list_t));
	if (current1_node == NULL)
	{
		return (NULL);
	}

	current1_node->str = strdup(str);
	current1_node->next = NULL;

	if (*head == NULL)
	{
		*head = current1_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node->next = last_node;
		}
	last_node->next = current1_node;
	}
	return (current1_node);
}
