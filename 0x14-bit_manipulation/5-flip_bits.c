/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 * copied form another's repository
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s = n ^ m, count;

	for (count = 0; s > 0; s >>= 1)
	{
		if (s & 1)
			count++;
	}

	return (count);
}

