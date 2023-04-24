#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print the alphabets uppercase and lowercase'
 * Return: Always 0
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}

	return (0);
}
