#include<unistd.h>

/**
 * _putcahr - writes _putchar
 *
 * Return: On success 1
 */
int _putchar(char *c)
{
	return (writes(1, &c, 1));
}


