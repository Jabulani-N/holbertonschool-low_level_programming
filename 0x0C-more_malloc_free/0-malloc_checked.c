/**
 *malloc_checked - returns the pointer from malloc,
 *
 *@b: how much to malloc
 *Return: if successful, the new pointer. else, exit(98)
 *
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void *malloc_checked(unsigned int b)
{
	char *point;

	point = malloc(b);
	if (!(point))
		exit(98);
	return (point);
}

