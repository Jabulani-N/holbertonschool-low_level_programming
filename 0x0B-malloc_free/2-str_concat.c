/*
 * it looks like this first task is essentially to make a 1Dimension array
 * of the given size, and fill each slot with the given char (one char)
 *
 * We have to malloc the space we're gonna use.
 * when you memory allocate (malloc),
 *	it'll return a pointer to where that memory is.
 *
 *I think if you malloc into a char,
 *	it automatically makes it a char (array)
 *	that means it follows char rules
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - preallocates memory, and then makes an array
 *	if a size requested is 0, treat that entry as ""
 *	Take the pointer to the preallocation,
 *	and shove the arary into it
 *
 *	this time, requested array is string s1, s2
 *	copy their content into new preallocated string
 *
 * @s1: string provided. an array of chars
 * @s2: string provided. an array of char.
 *
 *
 * Return: pointer to duped string
 *
 *	Largely copied from Task 1
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int subIndex = 0;
	unsigned int magicalIndex = 0;/*for safety's sake*/
	/*will be multi-use, so BE SURE TO RESET*/
	char *preallocated;
	/*pointer so base can be an address*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		/*null counts as empty string*/
	while (s1[magicalIndex])
		magicalIndex++;/*we now know size of s1*/
	while (s2[subIndex])
	{
		magicalIndex++;
		subIndex++;
	}
	preallocated = malloc((magicalIndex + 1) * sizeof(char));
	/*+1 makes it include the slot for terminating NULL*/
	if (preallocated == NULL)
		return (NULL);/*catch malloc errors*/
	/*reset index*/
	magicalIndex = 0;
	while (s1[magicalIndex])
	{
		preallocated[magicalIndex] = s1[magicalIndex];
		/*shoves requested char into place*/
		magicalIndex++;
	} /*we're at the end of s1's content, excluding NULL*/
	while (s2[subIndex])
	{
		preallocated[magicalIndex] = s2[subIndex];
		magicalIndex++;
		subIndex++;
	} /*it'll prolly end on NULL by default*/
	return (preallocated);
}
