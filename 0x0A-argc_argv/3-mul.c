#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check ifi 2 input args (argsc=3)
 *	if so, multiply
 *	if not, say 'error'
 *
 * argv[0] is function name. later positions have arguments made
 *
 *@argv: program name followed by input arguments.
 *	vector.
 *@argc: number of input arguments
 *
 *	Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		argv++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

