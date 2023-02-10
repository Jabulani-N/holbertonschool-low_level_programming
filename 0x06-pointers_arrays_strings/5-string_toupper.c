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
	/*char output[];*/
	/*it doesn't liek unknown rray size, so let's jsut directly change the source and re-output it*/
	int size;
	int pos;

	size = 0;
	for (pos = 0; input[pos] != '\0'; pos++)
	{
		size ++;
		
	}

	for (pos = 0; pos <= size; pos++)
	{
		if (input[pos] >= 97 && input[pos] <= 122) /*if lowercase*/
			input[pos] = (input[pos] - 32); /*make cuppercase*/
	}
	return (input);
}
