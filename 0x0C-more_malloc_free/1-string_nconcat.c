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
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointout;/*this guy'll hold the concatonated string*/
	unsigned int index = 0, subIndex = 0, s1len = 0,  s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
		n = 0;
	}
	/*
	 * if n is bigger than s2len, reudce it.
	 * if s2len is bigger than n, n needs no change
	 */
	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;
	if (n > s2len)
		n = s2len;
	pointout = malloc(s1len + n + 1);/*allocate. +1 = termi-NULL*/
	if (!(pointout))/*fail safe*/
		return (NULL);
	while (s1[index])/*fill the first half*/
	{
		pointout[index] = s1[index];
		index++;
	}
	while (subIndex < n)
		pointout[index++] = s2[subIndex++];
		/*all necesarry slots filled*/
	pointout[index] = '\0';/*NULL last slot*/
	return (pointout);
}

