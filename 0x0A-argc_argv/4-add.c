#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int heap;/*the sum*/

	while (*argv)
	{
		if (isnumber(*argv))
		{
			heap = (eap + atoi(argv);
			argv++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", heap);
	return (0);
}

