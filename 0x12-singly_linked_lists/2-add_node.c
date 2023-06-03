#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new nodes at the start
 * of a linked list
 * @head: points to the head of the
 * linked list
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current_node = malloc(sizeof(list_t));

	if (current_node == NULL)
	{
		return (NULL);
	}

	current_node->str = strdup(str);
	current_node->next = *head;
	return (current_node);
}

