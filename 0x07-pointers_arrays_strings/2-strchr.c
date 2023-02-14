/**
 * _strchr - pointer to first occurance of c in s
 * @s: string to scan for character c
 * @c: character we seek within s
 * Return: s[index that had c], or null if there were no occurances
 *	function declaration having asterik turns return into a pointer)
 *
 * because s is a char, it'll have to follow char rules
 *	that means we can treat it like any other array (hope)
 *
 * Mostly copied from Task 0
 **/

char *_strchr(char *s, char c)
{
	int hasC = -1;
	int index = 0;
	while (s[index] != c && s[index] != '\0' )
	{
		index++;
		/*checks all content starting at index 0*/
		/*first match breaks the while loop*/
	}
	/*if (hasC == -999)*//*string got found, so hasC never changed*/
		return (s[index]);/*return null if not found, because that's the terminator at end of string*/
	/*pointer to null is segmentation fault; may need something different for not-found case*/
	/*return ('\0');*/
}
/*
 * known bugs
 *
 */
