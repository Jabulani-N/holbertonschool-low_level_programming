/**
 * binary_to_uint - converts a binary value to int val
 * @b: string of 0/1. if it has anything else, complain
 * Return: the number represented by b
 *
 * binary's 1's place is index 0.
 * 10's place is index 1
 *
 * decimal number represented is
 * sum of each (content of index) x 2^index
 */

#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int index, pos = 0, len = 0, sum = 0;

	if  (b == NULL)
		return (0);

	for (pos = 0; b[pos]; pos ++)
	{
		if (b[pos] != '0' && b[pos] != '1')
			return (0)
	}
}

