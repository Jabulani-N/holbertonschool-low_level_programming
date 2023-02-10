/**
 * _strncpy - copy src string to overwrite dest string
 * is src is shorter, fill the remainder of dest with '\0'
 *
 *only take n characters from src
 * 
 * @dest: about to change into the first...
 * @n: number of characters to take from...
 * @src: will provide characters for copy
 *
 * Return: the new dest
 */

/*get dest size*/
/*move everything from src to dest*/
/*fill superflous dest slots with '\0'*/
char *_strncpy(char *dest, char *src, int n)
{
	int destSize;
	int pos;

	for (pos = 0; dest[pos] != '\0'; pos++)
	{
		destSize++;
	}
/*destSize established*/

	for (pos = 0; src[pos] != '\0' && pos <= n && pos <= destSize; pos++)
	/*begin replacements*/
	{
		dest[pos] = src[pos];
	}

	/*consider 
	 * n>destSize but smaller than src
	 * - handled in above for loop
	 *   - exits when position is end of dest
	 *
	 * n less than destSize
	 * - handled. for loop ends
	 *
	 * src is less tan destSize
	 * - loop ends, but has not filled the spaces with '\0' yet
	 *
	 * src is smaller than n
	 * -handled. loop ends with src's end
	 * */
	if (destSize > pos)
	/*fill everything above current pos with null*/
	{
		for (; pos <= destSize; pos++)
		{
			dest[pos] = '\0';
		}
	}
return( dest);
}
