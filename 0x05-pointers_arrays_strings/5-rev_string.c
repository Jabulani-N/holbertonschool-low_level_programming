#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *rev_string - use the preceding task's code to...
 *return the reversed string instead of _putchar-ing it
 *this means shoving it into a new char array instead
 *and then making s equal that array.
 * @str: the char array that'll be investigsted
 * Return: Void
 * basically copied form the previous 1 task
 **/
void rev_string(char *s)
{
	int i;
	int j;
	char reversed[1];

	 i = 0;
	while (s[i] != '\0')
/*so when we referenc the array itself, we already have access to it*/
/*so we don't need th asterik anymore*/
		{
		i++;
		}
	i--;
 /*i is now equal to the last valid index of the string*/
	/* i-- removed the invalid final index*/
		/*not removing it created an unneeded char*/
	for (j = i; j >= 0; j--)
	/*count backwards from the last index to zero (first index)*/
	{
		reversed[i-j] = s[j];
		/*puts whatever wass last in the first slot.*/
		/*vice-versand so on*/
	}
	for (j = i; j >= 0; j--)
	  /*count backwards from the last index to zero (first index)*/
	  {
	   *s[j] = reversed[j];
	    /*put items in their place*/
	  }
return;
}

/*This Index is magiacl*/
