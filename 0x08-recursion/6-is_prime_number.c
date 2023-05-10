#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number - shows if an integer is a prime number or not
 * @n: number to evaluate
 * Return: if n is 1 is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - shows if a number is a prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: if n is 1 is a prime number, 0 if not
 */
int actual_prime(int n, int i)
{
	if (n % i == 0 && i > 0)
		return (0);
	if (i == 1)
		return (1);
	return (actual_prime(n, n - 1));
}
