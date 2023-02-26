/**
 *string_nconcat - puttogether the inputs
 * NULL input is an empty string,
 * only add the first n char of s2
 *
 *@s1: take all of this
 *@s2: append the first n of this
 *@n: number of s2 cahracters to include. take all of s2 if bigger tahn s2
 *Return: if successful, the new pointer. else,return NULL
 *
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointout;/*this guy'll hold the concatonated string*/
	int index = 0, subIndex = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
		n = 0;
	}

	else if (n > strlen(s2))
		n = strlen(s2);
	pointout = malloc(strlen(s1) + n + 1);/*allocate. +1 = termi-NULL*/
	if (!(pointout))/*fail safe*/
		return (NULL);
	while (s1[index])
		pointout[index] = s1[index++];
	while (subIndex <= n)
		pointout[index++] = s2[subIndex++];
		/*all necesarry slots filled*/
	return (pointout);
}

