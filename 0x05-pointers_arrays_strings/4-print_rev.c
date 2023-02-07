#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_rev - use the preceding 2x ago task's code to count the size
 *then use that size to start at the end
 *	of the preceding task's puts
 *	to send the whole thing in reverse
 * @str: the char array that'll be investigsted
 * Return: Void
 * basically copied form the previous 2 task
 **/
void print_rev(char *str)
{
	int i;
	int j;

	 i = 0;
	while (str[i] != '\0')
/*so when we referenc the array itself, we already have access to it*/
/*so we don't need th asterik anymore*/
		{
		i++;
		}
	i--;
 /*i is now equal to the last valid index of the string*/
	for (j = i; j >= 0; j--)
	/*count backwards from the last index to zero (first index)*/
	{
		_putchar(str[j]);
	}
	_putchar('\n');
return;
}

/*This Index is magiacl*/
