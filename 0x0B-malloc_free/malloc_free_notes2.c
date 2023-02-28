#include <stdlib.h>

/**
 *
 *main - does some array thing4Return: success
 *
 *
 */

int main (void)
{
	int i;
	int num_strs = 42;
	int num_char = 12;
	
	char **strs = malloc(num_strs * sizeof(char *));/*string is char pointer(?)*/
	/*guess waht. you have to check fro if malloc failed*/
	/*if iit failed, free everything and exit*/
	if (!strs)/*strs became null if malloc failed. this is checking for that*/
		return(-1)/*free everything (nohting allocated yet)*/
	
	for (i = 0; i < num_strs; i++)
	{
		strs[i] = malloc(sizeof(char) * numchars);
		/*guess what...check safe blahblahblah*/

		/*if malloca failes, we need to free every completed inedx of strs[]*/
		if(!strs)
		{
			for (i = i - 1;i >= 0; i--) /*btw, --i subtracts before the operation of the line. i-- subtracts after it*/
			{

				free(strs[i]);/*the array's content*/
			}
			free(strs);/*the array itself*/
			return(-1);
		}
	}

	/*say we've done something witht he string between the above and the below*/

	/*time to free the memory*/
	for (i = 0; i < num_strs; i++)
		free(strs[i];/*free the content before deleting the holder*/
	free(strs);

}

