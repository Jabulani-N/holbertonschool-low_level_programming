/**
 *is_prime_number - summons sqrt_recursion_sub and returns the result
 *
 * prime means no number can multiply to equal it except 1 and itself
 * for example, 5 =1 x 5, but not 4,3, or 2 times anything.
 * @n: number to judge ♥
 * Return: 1 if prime
 *	but only if n is 1 or higher
 *	otherwise, return 0 outright
 *Returns 0 if input was negative
 *
 *
 *copied from Task 5,
 *changed it to appropriate variables.
 *nested like a colourful bird called the "for loop"
 **/

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_prime_number(int n)
{
	if (n > 1)/*is valid input*/
	{
		return (_prime(2, n));/*pass buck to subfunction*/
	}
	else /*forgone conclusion*/
		return (0);
}

/**
 * _prime - checks if current input is square root
 *	if so, returns it. if not, checks one number lower.
 * @x: poorential factor of numInQuestion
 * @numInQuestion: test if she's a prime
 *	or a mere training frame
 *
 *Return: 00 if it ever produces numInQustion; 1 if no combo can
 *
 *freshly brewed code. hand-typed.
 * yea it was until my approach tunred into tons of segmentation faults
 * 	on masive numbers to test
 * 	kept getting core dump
 * 	likely an issue of running too many computations
 * 	or overflowing int limit
 *
 *got idea of testing for remainder of 0 from another
 *this lack of creativity in realiszing 
 *i need to take alternate approach is
 *potential problem
 *Genuinely disappointed in myself for not realizing
 *correct approach.
 *because there was basically no way I'd think of it tonight.
 *feeling like failure. unfortunate.
 */

int  _prime(int x, int numInQuestion)
	/*
	 * check to make sure the  product is below num in question
	 *	so we don't break integer limit
	 *		...again.
	 */
{
	if (x >= numInQuestion)
		return(1);/*it was immune to all checks*/
	else if ((numInQuestion % x) == 0) /*if it divides, gg*/
	{
	/* counting up from double 2, after int overflow fiasco of Task 5*/
	/*	2 because 1 is a useless factor*/
		return (0);/*no re*/
	}
	else if (x  < numInQuestion && x * y < numInQuestion)
		return(_prime(x + 1, numInQuestion));
		/*just try the next number*/
	/*failsafe return.*/
return (1);
}
