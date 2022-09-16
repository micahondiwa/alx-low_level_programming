#include "main.h"

/**
 * _isupper - checks if paramter is an uppercase chracter
 * @c: input character
 * Return: 1 if is an uppercase, 0 in other case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
