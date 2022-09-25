#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no rteurn.
 */
void print_buffer(char *b, int size)
{
	int j, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 = 0)
					printf(" ");
				if (k < size)
					printf("%.zx", *(b + k));
				else
					printf(" ");
			}
			printf(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + 1) < 32 || *(b + 1) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + 1));
			}
			printf("\n");
		}
	}
}
