


/**
 * array_iterator - puts recievevd args into recieved function
 *
 * @array: received argument
 * @size: recieved argument. size of array
 * @action: received function
 * Return: absolutely nothing
 *	do NOT return "NULL". it will not work.
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

void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*fun_ptr)(int) = *action;
	size_t index;

	if (action == NULL || size == 0)
		return;
	for (index = 0; index < size; index++)
		fun_ptr(array[index]);
}

/*
 * basically, just take recieved function
 *	make sure it is valid
 *	make sure received argument is also valid
 * run received function with received argument
 * that's all you need
 *
 *
 */

