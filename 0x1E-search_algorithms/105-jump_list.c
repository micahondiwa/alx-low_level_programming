#include "search_algos.h"
#include <math.h>
/**
 * jump_list - jump search for singly linked list
 * @list: list to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: target node, NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int ws = (int) sqrt(size);
	size_t i = 0;
	listint_t *l = list, *r = list;

	if (!list)
		return (NULL);
	while (list)
	{
		if (r->index == size - 1 || r->n >= value)
		{
			printf(
				"Value found between indexes [%lu] and [%lu]\n",
				l->index, r->index
			);
			break;
		}
		l = r;
		for (i = r->index + ws; r->index < i && r->next; r = r->next)
			;
		printf("Value checked at index [%lu] = [%d]\n",
			r->index, r->n
		);
	}
	for (; l != r->next; l = l->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", l->index, l->n);
		if (l->n == value)
			return (l);
	}
	return (NULL);
}
