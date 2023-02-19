#include "main.h"
#include <stdio.h>

/**
 * main - print the number of input args
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
	(void) argc;/*arg c will not be used*/
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}

