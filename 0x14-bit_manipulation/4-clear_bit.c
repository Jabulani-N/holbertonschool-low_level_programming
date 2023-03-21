#include "main.h"

/**
 * clear_bit - A function that sets a bit to 0 at given index
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 * copied from another's repo
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = ~(1 << index);

	if (index > 63)
		return (-1);

	*n &= i;

	return (1);
}

