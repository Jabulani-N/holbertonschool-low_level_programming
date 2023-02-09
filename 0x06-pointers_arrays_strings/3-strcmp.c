#include "holberton.h"
/**
 * _strcmp - compare two strings and say whose bigger
 * tells via returning an integer
 * @s1: for comparion
 * @s2: for comparison
 * Return: integer. sign/0 depends on if s1<s2.
 **/

/*strcmp compares the items char-by-char*/
/*online resources imply it compares ASCII values*/
/*due to this, let's try going while they are the same and not '\0'*/
/*while the difference between them is 0 and (either) is not terminating null*/
/*keep iterating*/
/*when it breaks, return the difference*/
/*if it never broke until it hit the end, the idff will still be 0*/
/*i just tested in pythontutor.com. you can do math on terminating null*/


/*if attemtping to use while loop to avoid going over the limit fails*/
/*create a section to find the shortest length*/
/*subtract and return their values at last valid position*/
int _strcmp(char *s1, char *s2)
{
	int position;
	int maxPosition;

	position = 0;
	while (s1[position] != '\0' && s2[position] != '\0')
	{
		position++;
	}
	maxPosition = position;
	position = 0;
	while (position <= maxPosition && s1[position] == s2[position])
	{
		position++;
	}
	return (s1[position] - s2[position]);
}
