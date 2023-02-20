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
 *_strdup - preallocates memory, and then makes an array
 *	if the size requested is 0: allocate null, return null
 *	otherwise, take the pointer to the preallocation,
 *	and shove the arary into it
 *
 *	this time, the requested array is string str
 *	copy it's content into a new preallocated string
 *
 * @str: string provided. an array of chars
 *
 *
 * Return: NULL if str == NULL
 *	otherwise pointer to the duped string
 */

char *_strdup(char *str)
{
	unsigned int size;
	unsigned int magicalIndex = 0;/*for safety's sake*/
	/*will be multi-use, so BE SURE TO RESET*/
	char *preallocated;
	/*pointer so base can be an address*/

/*establish size of str*/
	/*in c, string is 1D char array*/
	for (magicalIndex = 0; str[magicalIndex] != '\0'; magicalIndex++)
		size = magicalIndex;

	preallocated = malloc(size * sizeof(char));
	/*preallocated has become a pointer to the allocated memory*/
	/*it seems to have also kept the char trait.*/

	if (str == NULL)
		return (str);
	/*
	 * returns null if pointer was to null
	 * I guess this is a redundancy?
	 */
	if (size == 0)
		return (NULL);
	/*return null if size 0 (useless array)*/
 /*
  * beause that'd make the only content null,
  *	but wouldn't that'd make preallocated null?
  */

/*so now that we know the target and array will be valid...*/
	/*reset index*/
	magicalIndex = 0;
	while (str[magicalIndex])
	{
		preallocated[magicalIndex] = str[magicalIndex];
		/*shoves requested char into place*/
		magicalIndex++;
	}
	return (preallocated);
}
