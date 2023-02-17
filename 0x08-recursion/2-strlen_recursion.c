/**
 * _strlen_recursion - returns length of char array s
 *	call self and give it
 *		then shove the remaining letters into recursion
 *		we can do this via sending it s++, or s+1. or s >= 1
 *		this is because sending  an array this way sends only positions 1 and up
 *		remember the first slot in an array is position 0
 *			YOU HAVE TO S++ BEFORE SENDING IT
 *			because it'll send s first, then ++ the s after the line is run
 *
 * @s: char array in question
 * Return: 1 + the number of times recursed after myself got called,
 *	but only if there was a valid character
 * Returns 0 if there was not a valid character
 *	-there would be no reason to recurse after me anyway, as I saw the array end
 *
 * copied form Task 1,
 *	but changed basically the endite code
 **/

#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s)/*there is still some left to work with*/
	{
		return (1 + _print_strlen_recursion(s + 1));/*recurse*/
			/*
			 * shoves the next character into the same function.
			 * if there are more characters, it'll add one to the return
			 * if not, it'll return zero, as it did not enter this if gate.
			 * this makes the first instance of this function essentially add one
			 * for each time the function got a valid character.
			 */
	}
	return (0);/**/
}
