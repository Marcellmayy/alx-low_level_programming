#include <stdlib.h>

/**
 * array_iterator - Executes a function that's a parameter of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	for (; i < size; i++)
		action(array[i]);
}
