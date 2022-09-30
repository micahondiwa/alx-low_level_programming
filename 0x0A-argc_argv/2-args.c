#include<stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line args.
 * @argv: array that contains the program command line args.
 * Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
