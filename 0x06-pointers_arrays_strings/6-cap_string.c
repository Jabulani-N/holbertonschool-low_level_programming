/*
 *cap_string - scans for lowercase
 * if lowercase, and previous char was divider, make uppercase
 *
 * @char: array to be scanned
 *
 *Return: edited array: char
 *
 */

/*
 * if statement to make sure it's lowercase
 * switch case for previous index being a separator.
 *
 * each case will check for a  separator directly.
 * each case will have the same commmand of capitalizing 
 * no case needed for no change = no 'default' necessary
 *because it is impossible for more than one to be true,
 *	break is engi-redundant
 *
 *	To be betty compliant, compress cases into a few || statements

 * \t = tab
 */
char *cap_string(char *imp)
{
	int index;

	for (index = 0; imp[index] != '\0'; index++)/*iterate through imp*/
	{
		if (imp[index] >= 'a' && imp[index] <= 'z')/*if we're on a lowercase*/
		{
			if (index == 0)/*first character always capitalized if lowercase*/
			{
				imp[index] = (imp[index] - 32);
			}
			else /*else prevents looking at array positon = -1*/
			{
				switch (imp[index - 1])/*looking at preceding character (for separators)*/
				{
					case ' ':
						imp[index] = (imp[index] - 32);/*case format verified. this funcitonal.*/
						break;
					case '\t':
						imp[index] = (imp[index] - 32);
						break;
					case '\n':
						imp[index] = (imp[index] - 32);
						break;
					case ',':
						imp[index] = (imp[index] - 32);
						break;
					case ';':
						imp[index] = (imp[index] - 32);
						break;
					case '.':
						imp[index] = (imp[index] - 32);
						break;
					case '!':
						imp[index] = (imp[index] - 32);
						break;
					case '?':
						imp[index] = (imp[index] - 32);
						break;
					case '"':
						imp[index] = (imp[index] - 32);
						break;
					case '(':
						imp[index] = (imp[index] - 32);
						break;
					case ')':
						imp[index] = (imp[index] - 32);
						break;
					case '{':
						imp[index] = (imp[index] - 32);
						break;
					case '}':
						imp[index] = (imp[index] - 32);
						break;

				}
			}
		}
	}
return (imp);
}
