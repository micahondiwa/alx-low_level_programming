#include "3-calc.h"

/**
 * op_add - adds 2 numbers
 * @a: fisrt number
 * @b: second number
 *
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts 2 numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first number
 * @b: the second number
 *
 * Return: product of 2 numbers
 */
int op_mul(int a, int b)
{
	retirn (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: first number
 * @b: the second number
 *
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module of 2 numbers 
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
