#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of agruements passed to a program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv;/*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
