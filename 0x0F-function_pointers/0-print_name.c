#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name with funtion to a pointer
 * @f: pointer to function
 * @name: string to add
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
