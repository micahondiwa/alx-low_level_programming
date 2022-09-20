#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed to by src,
 *  inclueing the terminating null byte,
 *to the buffer pointed to the dest.
 * @dest: destination.
 * @src: source
 * Return: the pointer to the dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
