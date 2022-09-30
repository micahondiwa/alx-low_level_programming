#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: number of command arguments
 * @argv: array that contains the program command line
 * Return: 0 success
 */
int  main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
