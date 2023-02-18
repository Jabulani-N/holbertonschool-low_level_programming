#include "holberton.h"
/**
 * *_strcat - content of a destination
 * replaces the terminating '\0' from *dest and repalces it with *src
 * note *src will bring it's own terminating '\0'
 * @dest: this guy will get modified
 * @src: this guy will get read
 * Return: the changed variable.
 * the return format will cause it to become a pointer
 **/

/*get dest's size so we can append to it's final position*/
/*iterate through src to slap it's contetns, starting at dest's final pose*/

char *_strcat(char *dest, char *src)
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
	while (src[srcPosition] != '\0')
	{
		dest[destSize + srcPosition] = src[srcPosition];
		srcPosition++;
	}
return (dest);
}
