#include "main.h"
/**
 *swap_int - swaps integers from the inputs,
 *via makign the pointers swap values
 * @a: thing 1. has a pointer
 * @b: thing 2. has a pointer
 **/
/*&a will mean 'address of a', allowing sending changes there from anywhere*/
/*thats how this funciton's pointers can mail data across the digital sea*/
void swap_int(int *a, int *b)
{
	int aHolder;
	int bHolder;

	aHolder = *a;
	bHolder = *b;
	*a = bHolder;
	*b = aHolder;
/*This can eb more efifceintly done via a single holder var,*/
/*but this way is more clear for readers of the code*/
}
