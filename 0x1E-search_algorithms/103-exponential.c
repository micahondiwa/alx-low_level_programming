#include "search_algos.h"

void print_array_bs_exp(int *array, int l, int r);
int binary_search_exp(int *array, int l, int r, int value);
/**
 * exponential_search - exponential search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: target index, -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	int l = 0, r = 1;

	if (!array)
		return (-1);
	while (r < (int) size - 1)
	{
		if (array[r] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", r, array[r]);
		l = r;
		r = r * 2 <= (int) size - 1 ? r * 2 : (int) size - 1;
	}
	printf("Value found between indexes [%d] and [%d]\n", l, r);
	return (binary_search_exp(array, l, r, value));
}
/**
 * binary_search_exp - binary search
 * @array: array to search
 * @l: left bound
 * @r: right bound
 * @value: value to search for
 *
 * Return: target index, -1 if not found
 */

int binary_search_exp(int *array, int l, int r, int value)
{
	int mid;

	while (array && l <= r)
	{
		print_array_bs_exp(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
/**
 * print_array_bs_exp - print array for binary search
 * @array: array to print
 * @l: left bound
 * @r: right bound
 */

void print_array_bs_exp(int *array, int l, int r)
{
	printf("Searching in array: ");
	while (l < r)
		printf("%d, ", *(array + l++));
	printf("%d\n", *(array + r));
}
