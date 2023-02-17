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

int is_prime_number(int n)
{
	if (n > 1)/*is valid input*/
	{
		return (_prime(2, 2, n));/*pass buck to subfunction*/
	}
	else /*forgone conclusion*/
		return (0);
}

/**
 * _prime - checks if current input is square root
 *	if so, returns it. if not, checks one number lower.
 * @x: poorential factor of numInQuestion
 * @y: potential factor of numInQuestion
 * @numInQuestion: test if she's a prime
 *	or a mere training frame
 *
 *Return: 00 if it ever produces numInQustion; 1 if no combo can
 *
 *freshly brewed code. hand-typed.
 **/

int  _prime(int x, int y, int numInQuestion)
	/*
	 * check to make sure the  product is below num in question
	 *	so we don't break integer limit
	 *		...again.
	 */
{
	if ((x * y) == numInQuestion) /*if it hit the num, gg*/
	{
	/* counting up from double 2, after int overflow fiasco of Task 5*/
	/*	2 because 1 is a useless factor*/
		return (0);/*no re*/
	}
	else if (x  < numInQuestion && x * y < numInQuestion)/*x still viable*/
		/*
		* && x has not passed relevant products for this y
		* this clause protects int limit
		*/
		return (_prime(x + 1, y, numInQuestion));
	else if (y < numInQuestion)
	{
/*
 *	we wanna try every x value for the next y value.
 *	the recursed summoning will handle increasing x for us.
 *		we don't have to increase it here. That means start at x=2 again.
 *int limit is protected by the instant result of sending values too fat
 *		being a bounce form this function's first check with x * y when judging
 */
		if (y * 2 <= numInQuestion)
			return (_prime(2, y + 1, numInQuestion));
		 /*sending 2 as x is fine because it will try 3,4,etc as x anyway.*/
		 /*y will eventually get too big and keep sending for new y values timse 2*/
		 /*so we do a check*/
		 /*		if y*2 is too fat, it's already past the point of relevance*/
		return (1);/*implied else (don't have the lines)in the case, return prime*/
	}
/*both x and y are spent. only a Prime could be this strong*/
	/*else is implied.*/
return (1);
}
