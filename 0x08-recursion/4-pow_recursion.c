/**
 * _pow_recursion - multiplies x by itself y times
 *	calls self and givs it x, y-1
 *power is number times itself
 * for example, 5^5 = 5x5x5x5x5
 * @x: number to be multiplied♥
 * @y; number of times to multiply x
 * Return: x times self,y-1
 *	but only if y is 0 or higher
 *Returns -1 ifi nput was negative
 *
 *
 *copied form Task 3,
 *changed it to appropriate variables.
 *minor changes to represent exponents
 **/

#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y > 0)/*there is still some left to work with*/
	{
		return (x * _pow_recursion(x, y - 1));/*recurse*/
	}
	else if (y == 0) /*last consideration*/
		return (1);/*x^0 = 1, so this is correct even if we started with y=0*/
	else/*neither 0 nor greater than 0 musst be negative*/
		return (-1);
}
