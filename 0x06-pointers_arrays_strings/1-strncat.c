#include "holberton.h"
/**
 * *_strncat - content of a destination
 * replaces the terminating '\0' from *dest and repalces it with *src
 * cant take more than n bytes from src.
 * note *src will bring it's own terminating '\0'
 * @dest: this guy will get modified
 * @src: this guy will get read
 * @n: byte cap. do not exceed.
 *
 * Return: the changed variable.
 * the return format will cause it to become a pointer
 * This is copied from Task 0
 **/

/*get dest's size so we can append to it's final position*/
/*iterate through src to slap it's contetns, starting at dest's final pose*/

char *_strncat(char *dest, char *src, int n)
{
	int destSize;
	int srcPosition;

	destSize = 0;
	srcPosition = 0;

	while (dest[destSize] != '\0')

	{
		destSize++;
	}
	/*we now know destSize, and can append starting at the final position*/
	/*we'll use srcPosition to check and make sure we stop at the end or src*/
	while (src[srcPosition] != '\0' && srcPosition <= (n / 4))
	/* a char is 8 bytes, so n/8 = number of chars from src allowed to add*/
	{
		dest[destSize + srcPosition] = src[srcPosition];
		srcPosition++;
	}
/*is the error perhaps that it is including the null*/
 /*  at the end of the too-fat sources?*/
return (dest);
}
