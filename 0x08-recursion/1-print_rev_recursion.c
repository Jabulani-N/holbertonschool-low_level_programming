/**
 * _print_rev_recursion - scans char array s
 *	_putchar the first part of the array
 *		then shove the remaining letters into recursion
 *		we can do this via sending it s++, or s+1. or s >= 1
 *		this is because sending  an array this way sends only positions 1 and up
 *		remember the first slot in an array is position 0
 *			YOU HAVE TO S++ BEFORE SENDING IT
 *			because it'll send s first, then ++ the s after the line is run
 *
 * @s: char array in question
 * Return - nothing (Void)
 * 
 * copied form Task 0,
 * 	but reordered to make the last one run first
 **/

#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s)/*if it works for while loops, just maybe we can if it*/
	{
		s++;/*move s to the next slot*/
		_print_rev_recursion(s);/*recurse*/
		s--; /*put s back where it started for this iteration*/
		_putchar(*s);/*content of s*/
		/*
		 * because we recursed first, it'll go all the way t the end,
		 * and the last to get called will be the first to finish
		 */
	}
	else
		_putchar('\n');
/*no return because it's void*/
}
