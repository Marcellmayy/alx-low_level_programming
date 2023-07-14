#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b:the memory to be allocated
 *
 * Return: a pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *memAllocate;

	memAllocate = malloc(b);

	if (memAllocate == NULL)
	{
		exit(98);

	}
	return (memAllocate);

}
