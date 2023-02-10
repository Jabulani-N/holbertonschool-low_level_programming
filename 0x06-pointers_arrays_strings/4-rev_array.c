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
	int UQHolder; /*multi-purpose, eternal holder variable*/
	/*UQHolder is int because the array holds int*/
	int position;

	for (position = 0; position <= (n / 2); position++)
	{
		UQHolder = a[position];
		a[position] = a[n - position - 1];
		/* -1 so it doesn't pull the terminating null character*/
		a[n - position - 1] = UQHolder;
		/*the place we pulled from is the place that gets replaced*/
		/*this cannot exceed the bounds of the array*/
	}
}
