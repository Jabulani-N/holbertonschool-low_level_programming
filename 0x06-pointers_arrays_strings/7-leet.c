/**
 * leet - scans for certain chars
 * if one of them, replace with leetspeek equivalent
 * @imp: array to be scanned
 * Return: edited imp
 *
 * one if limit
 *  - this means no else if
 *  two loop limit
 *
 *
 *  loop1: iterate through imp
 *  if: imp[impIndex](current imp entry) matches any real entry
 *	(iterate through real via magicIndex LOOP 2 SPENT HERE
 *  then replace it with the same position in leetspeek
 **/

char *leet(char *imp)
{
	int impIndex;
	int magicIndex;
	char real[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char leetspeek[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (impIndex = 0; imp[impIndex] != '\0'; impIndex++)
	/*iterate through imp*/
	{
		for (magicIndex = 0; real[magicIndex] != '\0'; magicIndex++)
		/*iterate through real during current letter of imp*/
		/*this means, "do the contained for every letter of real"*/
		{
			if (imp[impIndex] == real[magicIndex])
			/*if current imp letter matches current real letter*/
			/*The for loop for magicIndex makes us check every real char*/
			imp[impIndex] = leetspeek[magicIndex];
			/*change imp's real to leetspeek ver*/
		}

	}
	return (imp);
}

