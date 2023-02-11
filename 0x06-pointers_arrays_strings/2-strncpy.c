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
	int srcl = 0;/*source length*/
	int pos = 0;

	while (src[srcl] != '\0')
	{
		srcl++;
	}
/*source length established*/

	for (pos = 0; src[pos] != '\0' && pos < n; pos++)
	/*begin replacements*/
	{
		dest[pos] = src[pos];
	}

	/*consider 
	 * DONT FIX IT IF SOURCE TOO SMALL
	 * - originalfunction doesnt, so we dont either
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

	/*fill everything above past source with null until n */
	/*does not care if source was too short. it WILL have n chars*/
pos = srcl;
		while (pos < n)
		{
			dest[pos] = '\0';
			pos++;
		}

return(dest);
}
