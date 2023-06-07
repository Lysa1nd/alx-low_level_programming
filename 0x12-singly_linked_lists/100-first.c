#include <stdio.h>

void first(void) __attribute__
((constructor));

/**
 * first - prints a function before main
 * return: Always (success)
 */

void first(void)
{
	printf("You are a beat! and yet, you must allow,\n");
	printf("l bore my house upon my back!\n");
}
