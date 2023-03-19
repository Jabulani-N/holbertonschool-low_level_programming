/**
 * _simpow - positve intieger exponents
 * @x: base
 * @y: exponent
 * Return: product
 */

int _simpow(int x, int y)
{
	int product = 1, i;

	if (y == 0)
		return (1);

/*	printf("simpow got %i as x and %i as y\n", x, y);*/
	for (i = 0; i < y; i++)
	{
		product = (product * x);
/*		printf("Multi'd %i %i times. current prod: %i\n", x, i, product);*/
	} /*printf("final simpow product: %i\n", product);*/
	return (product);
}
