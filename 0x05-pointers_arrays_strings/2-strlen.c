#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - returns the integer lenth of a string
 * A string is an array of characters
 * @s: the char array that'll be investigsted
 * Return: length of array s
 **/
int _strlen(char *s)
{
	int i;

	i=0;
	while (s[i] != '\0')
		/*so when we referenc the array itself, we already have access to it*/
		/*so we don't need th asterik anymore*/
	{
	i++;
	}	
		return (i);
	/*like the strlen manual entry, we're gonna go until we hit the "terminating null byte '/0'"*/
}

