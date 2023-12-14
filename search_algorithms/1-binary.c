#include "search_algos.h"

/**
	*linear_search - returns index of array array containing value value
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

int binary_search(int *array, size_t size, int value)
{
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
	unsigned int i = size/2;
	unsigned int i2 = NULL;
	//we're making i start as the center value, and if there are 2, i2 will be the other

	if (array == NULL)
	{
		return (-1);
	}

	while (array[i] != value && i < size)
		/*while it is not the target value*/
		/* and while it is still within range of array*/
		/* be sure to do the print part that reports current index*/
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		i++;
	}

	if (array[i] == value)
	{ /*if it actually found the right target, return the index*/
	printf("Value checked array[%i] = [%i]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
