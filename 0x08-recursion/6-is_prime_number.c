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
	if (n > 0)/*is valid input*/
	{
		return (_prime(1, 1, n));/*pass buck to subfunction*/
	}
	else /*forgone conclusion*/
		return (0);
}

/**
 * _prime - checks if current input is square root
 *	if so, returns it. if not, checks one number lower.
 * @x: poorential component of numInQuestion
 * @y: potential component of numInQuestion
 * @numInQuestion: test if she's a prime
 *	or a mere training frame
 *
 *Return: 00 if it ever produces numInQustion; 1 if no combo can
 *
 *freshly brewed code. hand-typed.
 **/

int  _prime(int x, int y, int numInQuestion)
{
	if ((x * y) == numInQusetion) /*if it hit the num, gg*/
	{
	/*
	* counting up from double 1's,
	*	after the int overflow fiasco of Task 5
	*/
		return (0);/*no re*/
	}
	else if (x  < numInQuestion)/*x is still able to contend*/
		return (_prime(x + 1, y, numInQuestion));
	else if (y < numInQuestion)
	{
/*
 *	we wanna try every x value for the next y value.
 *	the recursed summoning will handle increasing x for us.
 *		we don't have to increase it here
 *		That means start at x=1 again.
 */
		return (_prime(1, y + 1, numInQuestion));
	}
	else
/*	both x and y are spent. only a Prime could be this strong*/
	{
		return (1);
	}

}
