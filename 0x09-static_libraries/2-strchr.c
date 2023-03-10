/**
 * _strchr - pointer to first occurance of c in s
 * @s: string to scan for character c
 * @c: character we seek within s
 * Return: first occurence through end of string
 *	function declaration having asterik turns return into a pointer)
 *
 * becase s is char, it follows char rules.
 *
 * Mostly copied from another person's completion of this task
 * will use this to learn to safely iterate through a char array
 * previous attempts segmentation faulted during while loops
 **/

char *_strchr(char *s, char c)
{
	while (*s) /*should safely go through s's content*/
	{
		if (c == *s)/*either order works here*/
			return (s);/*entire remaining array*/
		s++;/*changes position in *s*/
	}
	if (c == *s)/*has to be in this order here*/
		return (s);/*I don't understand what this adds*/
	/*every possible position of s should have been checked via while*/
	/*I suppose we'll just take this to mean that it doesn't*/
	/*
	 * assuming this gets it right.
	 *	omitting the phrase above causes one output failure case
	 */
	return ('\0');/*s never had it, so return null instead*/
}
/*
 * known bugs
 *
  *
 */
