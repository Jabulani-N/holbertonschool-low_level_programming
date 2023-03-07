


/**
 * print_name - purts recievevd arg1 into recieved function
 *
 * @name: received argument
 * @f: received function
 * Return: void
 *
 * Description: basically, we jsut recieve a funciton
 * create a pointer to said funciton (it'll look liek a variable)
 *	interact liek a function-like macro
 */

#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *name2))
{
	if (f == NULL || name == NULL)
		return (NULL);

	f(name);
}

/*
 * basically, just take recieved function f
 *	make sure it is valid
 * run f with the received argument name
 *	make sure it is also valid
 * that's all you need.
 */

