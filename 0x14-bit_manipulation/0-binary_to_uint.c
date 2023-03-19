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
#include "_strlen.c"
#include "_pow.c"
unsigned int binary_to_uint(const char *b)
{
	unsigned int index, pos, len, sum = 0;

/*	printf("len is %i\n", len);*/
	if  (b == NULL)
		return (0);
	len = (_strlen(b) - 1);
	for (pos = 0; b[pos]; pos++)
	{ /*printf("sum spawned in at %i\n", sum);*/
		if (b[pos] != '0' && b[pos] != '1')
			return (0);
		index = (len - pos);
		if ((b[pos] - 48) != 0)
			sum += ((b[pos] - 48) * (_simpow(2, index)));
		/*converting the char into respective int*/
		/*will need a separate sorting to use hex/anything including letters*/
/*		printf("index is %i; pos is %i; sum is %i\n", index, pos, sum);*/
/*		printf("item was %c which turned into int %i\n", b[pos], b[pos] - 48);*/
	}
	return (sum);
}

