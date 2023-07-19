#include <stdlib.h>
/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array.
 * @size: Number in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element for which cmp function does not return 0,
 *         -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp || !array)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
