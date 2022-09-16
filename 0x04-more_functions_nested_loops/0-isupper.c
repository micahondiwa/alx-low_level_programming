#include "main.h"
#include<stdio.h>

/**
 * int_isupper - Checks for uppercase character
 *@c: input character
 * Return: 1 if is an uppercase character, 0  if in other case
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
