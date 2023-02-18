
#include <unistd.h>
#include "main.h"
#include "stdio.h"

/**
 *_puts - shove string into _putchar
 * A string is an array of characters
 * This becomes much easier once you remember you can use _puts
 * @str: the char array that'll be investigsted
 * Return: Void
 * basically copied form the previous task
 **/
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		/*when we referenc the array itself, we already have access to it*/
		/*so we don't need th asterik anymore*/
	{
	_putchar(str[i]);
/*consider going back to where you wrote a _putchar*/
/*to remind yourself how to print to standard output*/
	i++;
	}
	_putchar('\n');
		return;
	/*like the strlen manual entry says,*/
	       /*we're gonna go until we hit the "terminating null byte '/0'"*/
}

