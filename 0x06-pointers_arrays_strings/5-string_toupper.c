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
	char output[];
	int size;
	int pos;

	size = 0;
	while (*input)
	/*trying an iteration style I saw elsewhere*/
	{
		size ++;
		input++;
	}

	for (pos = 0; pos <= size; pos++)
	{
		if (input[pos] >= 97 && *input <= 122) /*if lowercase*/
			output[pos] = (input[pos] - 32); /*make cuppercase*/
		else
			output[pos] = input[pos];/*take as is*/
	}
	return (output);
}
