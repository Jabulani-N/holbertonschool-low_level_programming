/**
 * _puts_recursion - scans char array s
 *	_putchar the first part of the array
 *		then shove the remaining letters into recursion
 *		we can do this via sending it s++, or s+1. or s >= 1
 *		this is because sending  an array this way sends only positions 1 and up
 *		remember the first slot in an array is position 0
 *
 * @s: char array in question
 * Return - nothing (Void)
 **/

#include "main.h"

void _puts_recursion(char *s)
{
	if (*s)/*if it works for while loops, just maybe we can if it*/
	{
		_putchar(*s);/*content of s*/
		s++;/*move s to the next slot*/
		_puts_recursion(s);/*recurse*/
	}
	else
		_putchar('\n');
/*no return because it's void*/
}
