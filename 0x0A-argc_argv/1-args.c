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
	(void) argv;/*arg v will not be used*/
	printf("%d\n", argc - 1);
	return (0);
}

