/**
 * _memcpy - replaces memory locale s's content with char b for n positions
 * @dest: memory location. star makes us recieve it's contents
 * @src: replaces content of memory location s
 * @n: number of bytes of dest to replace with src
 * Return: content of dest (pointer to dest)
 *
 * because src is a char, it'll have to follow char rules
 *	that means we can treat it like any other array (hope)
 *
 *	This is largely copied from task 0
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
		/*replaces all content until slot 0*/
		/*-1 allows it to hit 0 despite n never hitting 0*/
		/*	also protects the terminating null at position initial n*/
	}
	return (dest);
}
/*
 * known bugs
 *
 *
 */
