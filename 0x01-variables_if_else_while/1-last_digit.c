#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description:'find the last digit of a number'
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if ((n % 10) < 6 && (n % 10) !=0)
	{
		printf("Last digit of %d is %d and less is than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and 0\n");
	}
	return (0);
}