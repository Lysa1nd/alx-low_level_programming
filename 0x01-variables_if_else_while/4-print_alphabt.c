#include<stdio.h>
/**
 * main - Entry point
 * Description: 'print the alphabets apart from q and e'
 * Return: Always 0
 */
int main(void)
{
	int b = 97;

	while  (b <= 122)
	{
		if (b == 101 || b == 113)
		{
			b++;
			continue;
		}
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

