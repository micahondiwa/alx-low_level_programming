#include "main.h"
#include<stdio.h>

/**
 * main - checks code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s =  "wworld of this";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%\n", t);
	return (0);
}
