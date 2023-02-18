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
	int ZentaiHolder; /*zentai: "all target" holder used everywhere*/
	/*ZentaiHolder is int because the array holds int*/
	int position;

	if (n == 2)
	{
		ZentaiHolder = a[0];
		a[0] = a[1];
		a[1] = ZentaiHolder;
	}

	for (position = 0; position <= (n / 2); position++)
	{
		ZentaiHolder = a[position];
		a[position] = a[n - position - 1];
		/* -1 so it doesn't interact with the terminating null charr*/
		a[n - position - 1] = ZentaiHolder;
		/*-1 so the place we pulled from is the place that gets replaced*/
	}
	/*note current code BREAKS IF SIZE = 2*/
	/*find what to do if position = 1. may becme if-statement*/
	/*Done in if-statement befor ethis for loop.*/
	/*the for loop won't ruin the two becuase it skips 2s for some reaosn*/
return;
}
