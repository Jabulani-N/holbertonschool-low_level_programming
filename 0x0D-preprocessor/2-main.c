/**
 *main - returns the name of the file it will be compiled from
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

	printf("__FILE__\n");/*__FILE__ is a predefined macro*/
	/*it expands into the name of the current inputfile*/
	/*name as in "whole entire address"*/
	/*
	 * since the complier/preprocessors can onlypossibly be reading
	 * these lines in this file while it is reading this file,
	 * that essnetially means
	 * "name/address of this file we humans are reading right now"
/*
 * further reading at
 * https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros
 */
	return(0);
}

