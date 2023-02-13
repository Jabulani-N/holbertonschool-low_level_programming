/**
 * _memset - replaces memory locale s's content with char b for n positions
 * @s: memory location. star makes us recieve it's contents
 * @b: replaces content of memory location s
 * @n: number of bytes of s to replace with b
 * Return: content of s (pointer to s)
 *
 * because s is a char, it'll have to follow char rules
 * 	that means we can treat it like any other array (hope)
 **/

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)/*n does not equal zero is n being true*/
	/*it'll read the -- after it's already used the current value*/
	{
		s[n - 1] = b;
		/*replaces all content until slot 0*/
		/*-1 allows it to hit 0 despite n never hitting 0*/
		/*	also protects the terminating null at position initial n*/
	}
	return (s);
}
/*known bugs
 *
 *segmentation fault when run.
 *	consider altering iteration that runs n times
 *		count up from spot 0 to spot n-1 (via "< n")
 */
