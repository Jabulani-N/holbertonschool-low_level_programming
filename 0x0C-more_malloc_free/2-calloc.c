/**
 * _calloc - malloc nmemb * size bytes of mem
 * return NULL if size
 * only add the first n char of s2
 *
 *@nmemb: number of bytes each array index costs
 *@size: how many indices in the hypothetical array
 *
 *Return: pointer to allcoated memory
 * if either input is 0, return NULL
 * if mallco fails, return NULL
 *
 * structure copied from Task1
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointout;/*this guy'll hold the concatonated string*/
	char *UQHolder;/*will hold the original content of pointout*/
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointout = malloc(nmemb * size);
	if (!(pointout))
		return (NULL);

	UQHolder = pointout;
	while (index < size)
	{
		pointout[index] = 0;
		index++;
	}
	pointout[size] = '\0';/*NULL last slot*/
	return (pointout);
}

