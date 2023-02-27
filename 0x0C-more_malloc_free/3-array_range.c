/**
 * array_range - malloc sizeof(int) * (difference between ranges +(1||2))
 * if the two input are the same
 * array is size 1 anc contains only that number
 * else, array is big enough to hold the two and all between
 * only add the first n char of s2
 *
 *@min: number the array begins with
 *@max: numebr array ends with
 *
 *Return: pointer to allcoated memory
 * if min is higher than max, return NULL
 * if mallco fails, return NULL
 *
 * structure copied from Task2
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int *array_range(int min, int max)
{
	int *pointout;/*this guy'll hold the concatonated string*/
	int index = 0;

	if (min > max)
		return (NULL);

	if (min = max)
	{
		pointout = malloc(sizeof(int));
		if (!(pointout))
			return (NULL);
		pointout[0] = min;
		pointout[1] = '\0';
		return (pointout);
	} /*all max !> min cases are caught*/

	pointout = malloc(sizeof(int) + 2 + (max - min));
	if (!(pointout))
		return (NULL);

	while (pointout[index])
	{
		pointout[index] = (min + index);
		index++;
	}
	pointout[index] = '\0';/*NULL last slot*/
	return (pointout);
}

