/**
 * factorial - ultimately returns factorial of input int
 *	calls self and givs it input-1
 *a factorial is a number times all numbers less than it until 0
 * for example, 5! = 5x4x3x2x1
 * @n: find my factorial, please♥
 * Return: input x return of self(input-1) as many times as recursed,
 *	but only if input is 1 or higher
 *	This simulates factorial calculation brute force
 *Returns 1 if input was 0 (0 factorial is 1)
 *Returns -1 ifi nput was negative
 *
 *
 *copied form Task 2,
 *changed it from a sum to a product
 *cahnged it to make 0 input a special case
 *changed it to make <0 a special case
 *changed it to work on integers instead of char arrays
 **/

#include "main.h"

int factorial(int n)
{
	if (n > 0)/*there is still some left to work with*/
	{
		return (n * factorial(n - 1));/*recurse*/
	}
	else if (n == 0) /*las consideration*/
		return (1);/*0! = 1, so this is correct even if we started with n=0*/
	else/*neither 0 nor greater than 0 musst be negative*/
		return (-1);
}
