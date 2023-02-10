#include "holberton.h"
/**
 * *_string_toupper - if target is lowercase, make it uppercase
 * for loop through the string array, and if entry is within lowercase
 * then add enough to make it uppercase (same for every letter)
 * @s: the string in question. char array
 * Return: the changed char array
 **/

/**/
/**/
char *string_toupper(char *input)
{
	while (*input)
	/*I saw smoeone else iterate an array like this*/
	/*trying it myself*/
	{
		if (*input >= 97 && *input <= 122) /*if lowercase*/
			*input = (*input - 32) /*make cuppercase*/
		/*we're seeing if *input this way lets us directly edit the cnotents */
		input++
	}
}
