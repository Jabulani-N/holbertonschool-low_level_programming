#include "search_algos.h"

/**
	*binary_search - returns index of array array containing value value
	* A string is an array of characters
	* @array: the array that'll be investigsted
	* @size: the length of array
	* @value: value to find. int.
	* Return: index containing value
	**/

	/*
	* Write a function that searches for a value in an array
	* of integers using the Linear search algorithm
	*
	* this means it just checks the list from front to back
	* and finishes when it either ends or when it finds a match
	*/

	/*
	* *array is a pointer to the array
	* we want to check the middle value of the array
	* * if there are 2 middle values, check both of them

	* if the middle index does not contain value, divide array in half
	* repeat on the relevant half
	*
	* if none hold value, or if value == NULL, return -1
	*
	* each check needs to print the position and value
	*   see example in README.md
	*/

int binary_search(int *array, size_t size, int value)
{
	unsigned int i = size / 2;
	unsigned int i2 = i - (1 - (size % 2));
	unsigned int scroller = 0;
	int *currentArray = array;
	unsigned int firstIdx = 0, lastIdx = size - 1;
	/*
	* we're making i start as the center value, and if there are 2,
	* i2 will be the lower center value
	* this makes i2 = i if size's an odd number, so both are center
	* i2 = i-1 if size is an even number,
	*	so i2 is the one just below the higher middle value
	*/
	if (array == NULL)
	{
		return (-1);
	}

	while (currentArray[i] != value && currentArray[i2] != value
			&& i <= lastIdx && i >= firstIdx)
		/*check if either i or i2 is target*/
	{
		printf("Searching in array: ");
		scroller = firstIdx;
		while (scroller < size)
		{ /* reports the current array*/
			printf("%i", currentArray[scroller]);
			if (scroller < lastIdx)
			{
				printf(", ");
			} scroller++;
		} printf("\n");
		i++;
		if (value > currentArray[i])
		{ /* change first index to be the index after i, and relocate i, i2*/
			firstIdx = i + 1;
			i = firstIdx + ((lastIdx - firstIdx) / 2);
			i2 = i - (1 - ((lastIdx - firstIdx) % 2));
		}
		else if (value < currentArray[i2])
		{ /* change last index to be the index before i2, and relocate i, i2*/
			lastIdx = i2 - 1;
			i = firstIdx + ((lastIdx - firstIdx) / 2);
			i2 = i - (1 - ((lastIdx - firstIdx) % 2));
		}
	}

	if (currentArray[i] == value)
	{ return (i); }
	return (-1);
}
