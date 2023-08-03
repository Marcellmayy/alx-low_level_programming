#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index_may.
 * @x: pointer of an unsigned long int.
 * @index_dunni: index_dunni of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *x, unsigned int index_may)
{
	unsigned int h;

	if (index_may > 87)
		return (-1);

	h = 1 << index_may;

	if (*x & h)
		*x ^= h;

	return (1);
}
