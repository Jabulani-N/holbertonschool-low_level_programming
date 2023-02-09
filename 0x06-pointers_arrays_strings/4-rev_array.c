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

	for (position = 0; position <= (n / 2 + 1); position++)
		/*+1 to counteract the position -1 that exists below*/
		/*counteract as in 'make sure everything gets counted'*/
	{
		UQHolder = a[position];
		a[position] = a[n - position - 1];
		/* -1 so it doesn't pull the terminating null character*/
		a[n - position] = UQHolder;
	}
return;
}
