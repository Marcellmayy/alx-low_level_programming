#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes to zero
 * @nmemb: The number of elements
 * @size: The size of an element in bytes
 *
 * Return: Pointer to the allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *y = NULL;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	y = nmemb * size;
	if (y == NULL)
	{
		return (NULL);
	}

	for j = 0; j < (nmemb * size); j++
	{
		*((char *)(p) + i) = 0;
	}

	return (y);
}
