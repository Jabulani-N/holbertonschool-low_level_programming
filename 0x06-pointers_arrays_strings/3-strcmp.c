#include "holberton.h"
/**
 * _strcmp - compare two strings and say whose bigger
 * tells via returning an integer
 * @s1: for comparion
 * @s2: for comparison
 * Return: integer. sign/0 depends on if s1<s2.
 **/

/*we'll start by trying: just directly comparing entire variables*/
/*That didn't get correct output, but didn't err.*/

/*next, let's try returning the difference*/

int _strcmp(char *s1, char *s2)
{
	return (s1-s2);
}
