/**
 * _sqrt_recursion - summons sqrt_recursion_sub and returns the result
 *
 * sqare root times itself = base
 * for example, 5 = square root of 5 * square root of 5
 * @n: base. number to find square root of ♥
 * Return: result of sqrt_recursion_sub
 *	but only if y is 0 or higher
 *	otherwise, return 0 outright
 *Returns -1 if input was negative
 *
 *
 *copied from Task 4,
 *changed it to appropriate variables.
 *minor changes to represent exponents
 **/

#include "main.h"

int _sqrt_recursion(int n)
{
	if (n > 0)/*is valid input*/
	{
		return (_sqrt_recursion_sub(n, 1));/*pass buck to subfunction*/
	}
	else if (n == 0) /*forgone conclusion*/
		/*
		 * this will work if sent to the sub.
		 * I only did it this way to preserve code I already had form copying
		 */
		return (0);/*0^2 = 0, so this is correct*/
	else/*neither 0 nor greater than 0 must be negative*/
		return (-1);
}

/**
 * _sqrt_recursion_sub - checks if current input is square root
 *	if so, returns it. if not, checks one number lower.
 * @base: the number we check if rootTest is root of
 * @rootTest: test if he's the root
 *	I wonder if anyone named theirs "groot"...
 *
 *Return: either rootTest, or the result of myself(base,rootTest-1)
 *
 *freshly brewed code. hand-typed.
 **/

int  _sqrt_recursion_sub(int base, int rootTest)
{
if ((rootTest * rootTest) == base) /*if it's square, gg*/
	/*
	 * counting from base breaks the integer limit
	 * if base is higher than square root of integer limit.
	 * count up from 1 or 0 instead, as initial input from parent function
	 */
	return (rootTest);/*no re*/
else if (rootTest >= base)/*base has no natural root, so it rose up to base*/
	return (-1);
else
	return (_sqrt_recursion_sub(base, (rootTest + 1)));
}
