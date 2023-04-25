#include<stdio.h>

/**
 * main - Entry point
 * Decsription: 'print numbers between 0 to 9 and letters between a to f'
 * Return: Always 0 (success)
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
	}
	for (m = 97; m < 103; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
