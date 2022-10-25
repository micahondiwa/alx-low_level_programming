#include <stdio.h>

/**
 * bmain - a function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must aloow");
	printf(",\nI bore my house upon my back!\n");
}
