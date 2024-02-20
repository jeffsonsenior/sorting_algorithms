#include "sort.h"

/**
 * swap_ints - swap the integers in an array form..
 * @a: the 1st int
 * @b: the 2nd int.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - sorting arreys of int in ascending form
 * @array: an array of int to sort.
 * @size: the size of the array sorting
 *
 * descr: we print the arrays after every swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}

