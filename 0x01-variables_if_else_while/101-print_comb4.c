#include<stdio.h>

/**
 * main - shows all different combined three digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int t, u, v;

	for (t = 48, t < 58, t++)
	{
	for (u = 49, u < 58, u++) 
		{
			for (v = 50, v < 58, v++)
		{
			if (v >u && u >t)
			{
				putchar(t);
				putchar(u);
				putchar(v);
				if (t != 55 || u != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
