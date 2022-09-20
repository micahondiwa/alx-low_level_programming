#include<stdio.h>

/**
 * main -Takes an integer and restes its pointer to 98.
 *
 * Return: Always 0.
 */
int main (void)
{
	int n;

	n = 98;
	printf("n = %d\n", n);
	n = &n;
	printf("n = %p\n", n);
	return (0);
}
