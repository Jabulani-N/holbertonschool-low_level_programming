#include "main.h"
#include <stdio.h>

/**
 * main - check the code
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
	(void) argc;
/*we did not forget argc. we choose not to use*/
	/*main must begin with an int argument if any.*/
	/*will only take 0 or 2 args. this allows taking 2*/
	printf("%s\n", argv[0]);
	return (0);
}

