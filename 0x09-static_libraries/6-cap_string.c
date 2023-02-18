/**
 * cap_string - scans for lowercase
 * if lowercase, and previous char was divider, make uppercase
 * @imp: array to be scanned
 * Return: edited array, char
 *
 *
 *
 * \t = tab
 **/

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
			if (imp[index - 1] == ' ' ||
				imp[index - 1] == '\n' ||
				imp[index - 1] == '\t' ||
				imp[index - 1] == ',' ||
				imp[index - 1] == ';' ||
				imp[index - 1] == '.' ||
				imp[index - 1] == '!' ||
				imp[index - 1] == '?' ||
				imp[index - 1] == '"' ||
				imp[index - 1] == '(' ||
				imp[index - 1] == ')' ||
				imp[index - 1] == '{' ||
				imp[index - 1] == '}'
				)
				imp[index] = (imp[index] - 32);
			}
		}
	}
	return (imp);
}

