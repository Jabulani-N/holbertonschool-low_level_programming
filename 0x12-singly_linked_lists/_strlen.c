/**
 * _strlen - measures a string
 * @input: input string to measure
 * Return: unsigned int taht is input's length
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int _strlen(const char *input)
{
	unsigned int len = 0;

/*	printf("_strlen activated\n");*/
	while (*(input + len))
	{

		len++;
	} /*printf("_strlen deactivating\n");*/
	return (len);
}

