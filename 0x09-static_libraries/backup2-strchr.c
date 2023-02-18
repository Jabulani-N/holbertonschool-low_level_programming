/**
 * _strchr - pointer to first occurance of c in s
 * @s: string to scan for character c
 * @c: character we seek within s
 * Return: first occurence through end of string
 *	function declaration having asterik turns return into a pointer)
 *
 * because s is a char, it'll have to follow char rules
 *	that means we can treat it like any other array (hope)
 *
 * Mostly copied from Task 0
 **/

char *_strchr(char *s, char c)
{
	int index = 0;
	int indexInterval;

	while (s[index] != c && s[index] != '\0')
	{
		index++;
		/*checks all content starting at index 0*/
		/*first match breaks the while loop*/
	}
	/*return s[index] through s[end]*/
	indexInterval = index;
	while (s[index] != '\0')
/*
 * move all entries back as many spaces as it takes to make
 * first occurance the first slot of s.
 * keep going until s[index] = null.
 * then put a null at s[index + 1] to close the array
 */
	{
		s[index - indexInterval] = s[index];/*shunt backwards*/
		index++;
	}

	return (s);
/*returns null if not found, because that's the terminator at end of string*/
	/*pointer to null is segmentation fault;*/
	/*	may need something different for not-found case*/
	/*return ('\0');*/
}
/*
 * known bugs
 *
 * segmentation fault.
 * 	this must be before return, as return(s) cannot cause this
 *
 */
