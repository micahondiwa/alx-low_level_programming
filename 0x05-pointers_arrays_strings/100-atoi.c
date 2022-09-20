#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input integer.
 * Return: integer
 */
int _atoi(char *s)
{
	unasigned int count = 0, size = 0, io = 0, pn = 1, m = i, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (szie > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
