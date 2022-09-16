#include "main.h"
#include<stdio.h>

/**
 * int_isupper - Checks for uppercase character
 *
 * Return: Alaways 0.
 */
int_isupper(int c)
{
	char c;

	if (c == 'A')
	{
		printf("%c: %\n", c, _isupper(c));
	}
	else if ( c == 'a')
	{
		printf("%c: %d\n", c, _isupper(c));
	}
	return (0);
}
