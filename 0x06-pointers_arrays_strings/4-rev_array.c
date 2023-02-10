#include "holberton.h"
/**
 * *reverse_array - reverses an array of size n
 * @a: array to be reversed
 * @n: number of integers in the array
 *
 * Return: Void
 *
 * changes the array itself via pointer
 **/

/**/
/**/

void reverse_array(int *a, int n)
{
	int Holder;
	/*Holder is int because the array holds int*/
	int position;

	for (position = 0; position <= (n / 2); position++)
	{
		Holder = a[position];
		a[position] = a[n - position - 1];
		/* -1 so it doesn't interact with the terminating null charr*/
		a[n - position - 1] = Holder;
		/*-1 so the place we pulled from is the place that gets replaced*/
	}
	/*note current code BREAKS IF SIZE = 2*/
	/*find what to do if position = 1. may becme if-statement*/
return;
}
