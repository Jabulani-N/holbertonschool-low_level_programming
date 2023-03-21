#include "main.h"

/**
 * get_bit - A function that gets a bit at index
 * @n: The number to get bit from
 * @index: The index where the bit get at
 * Return: The value of the bit or -1 if an error occured
 *
 * copied from another's repository
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}

