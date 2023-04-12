#include "search_algos.h"
void print_array_bs_adv(int *array, int l, int r);
int advanced_binary_helper(int *array, int l, int r, int value);
/**
 * advanced_binary - advanced binary search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: target index, -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array)
		return (advanced_binary_helper(array, 0, (int) size - 1, value));
	return (-1);
}
/**
 * advanced_binary_helper - helper
 * @array: array to search
 * @l: left bound
 * @r: right bound
 * @value: value to search
 *
 * Return: target index, -1 if not found
 */
int advanced_binary_helper(int *array, int l, int r, int value)
{
	int mid;

	print_array_bs_adv(array, l, r);
	if (l < r)
	{
		mid = (l + r) / 2;
		if (array[mid] == value)
		{
			if (mid > 0 && array[mid - 1] == value)
				return (advanced_binary_helper(array, l, mid, value));
			return (mid);
		}
		else if (array[mid] < value)
			return (advanced_binary_helper(array, mid + 1, r, value));
		else
			return (advanced_binary_helper(array, l, mid, value));
	}
	return (array[l] == value ? l : -1);
}
/**
 * print_array_bs_adv - print array for binary search
 * @array: array to print
 * @l: left bound
 * @r: right bound
 */
void print_array_bs_adv(int *array, int l, int r)
{
	printf("Searching in array: ");
	while (l < r)
		printf("%d, ", *(array + l++));
	printf("%d\n", *(array + r));
}
