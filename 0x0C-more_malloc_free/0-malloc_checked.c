/**
 *malloc_checked - returns the pointer from malloc,
 *
 *@b: how much to malloc
 *Return: if successful, the new pointer. else, 98
 *
 */

void *malloc_checked(unsigned int b)
{
	char *point;

	*point = malloc(b);
	if (!(point))
		return(98);
	return(*point);
}

