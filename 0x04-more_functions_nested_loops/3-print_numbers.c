#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: No return
 */
int print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
