	/*
	 *	WHILE LOOP
	 * valid ranges are index from 0 which holds min,
	 *	up to the difference between min and max,
	 *		plus 1, which holds max
	 *
	 *	if idfferendce is 1, index touches 2, but not 3
	 *		allocate for 2+(diff=1)=3 spots
	 *		0 holds min+(index=0)=min, 1 holds min+1,
	 *			!!!! 2 holds min+2 which is outside valid range
	 *		it will not affect slot 3 (which is outside the valid range)
	 *	if diff is 2, 0 holds min, 1,2 holds diff,
	 *
	 *if we do it while index is less than or equal to diff
	 *	if diff = 1
	 *	0 holds min+0; 1 holds min+1 = max
	 *		done
	 *	ALLOCATED space should be 2 ints, whic is diff+1
	 *
	 */
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
	int *UQHolder;/*holds pointout's original value*/
	int index = 0;

	/*	printf("I've begun\n");*/
	if (min > max)
		return (NULL);
	if (min == max)
	{
		pointout = malloc(sizeof(int));
		if (!(pointout))
			return (NULL);
		pointout[0] = min;
		pointout[1] = '\0';
		return (pointout);
	} /*all max !> min cases are caught*/
	pointout = malloc(sizeof(int) * (1 + (max - min)));
	if (!(pointout))
		return (NULL);
	UQHolder = pointout;
/*	printf("im about to begin the while loop's code declaration\n");*/
	while (index <= (max - min))
	{
/*		printf("im in while loop. index is %d\n",index);*/
		pointout[index] = (min + index);
		/*pointout++;*/
		index++;
	}
	pointout = UQHolder;/*put address back where it belongs*/
	pointout[index] = '\0';/*NULL last slot*/
	return (pointout);
}

/*
 * known bugs
 *	while loop for while(*pointout) never runs
 *		*pointout is never not NULL directly after allocation
 *	- try mkaing it count to a specific index number instead
 *
 *
 */
