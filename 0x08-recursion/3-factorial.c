#include "main.h"

/**
 * factorial - brings back the factorial of a number
 * @n: the number to go back to its factorial form
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
