


/**
 * int_index - puts recievevd args into recieved function
 *
 * @array: received argument
 * @size: recieved argument. size of array
 * @cmp: received function
 * Return: the index that got a match
 *	AKA - positive reponse from cmp
 *
 * Description: basically, we jsut recieve a funciton
 * create a pointer to said funciton (it'll look liek a variable)
 *	interact like a function
 * you can see the main file to see the format the function wants
 *
 * it wants to receive each element individually
 */

#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int (*fun_ptr)(int) = *cmp;
	int index;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
		if (fun_ptr(array[index]))
			return (index);
	return (-1);

}

/*
 * basically, just take recieved function
 *	make sure it is valid
 *	make sure received argument is also valid
 * run received function with received argument
 * that's all you need
 *
 *	KNOWN BUGS
 *
 *		FIXED
 * There is a case of input that creates an incorrect output.
 *	usually with arrays, this is a matter of neglecting the final position
 *	that holds the trminating null
 *	- it didn't consider the case of array == NULL
 */

