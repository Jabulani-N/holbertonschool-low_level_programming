#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - create heap
 *	if inputs are all numbers, addthem to the heap
 *	if not, say 'error'
 *
 * argv[0] is function name. later positions have arguments made
 *
 *@argv: program name followed by input arguments.
 *	vector.
 *@argc: number of input arguments
 *
 *	Return: 0 if it works. 1 if bad nput
 */
int main(int argc, char *argv[])
{
	int heap = 0, i, j;/*the sum, a counter, a counter*/
	/*it is important to remember to initialize heap*/
	j = argc;

	while (j-- > 1)/*0 breaks it*/
/*this whole thing is to check the all arguments are numbers*/
		/*argument level. whole string*/
	{
		/*about to check it's digits*/
		for (i = 0; argv[j][i]/*while this is valid*/; i++)
		/*single character level of an argument*/
		{
			if (!(isdigit(argv[j][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		heap = (heap + atoi(argv[j]));
	}

	printf("%d\n", heap);
	return (0);
}

