#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * print_alphabet_x10 - iterates the previous task 10x. 
 *literally copied the code and surrounded it in a 10x for loop.
 *
 * Return: Void
 *For looped the folliwing (copied form previous task)
 *send the caracters in the alphabet to function _putchar
 */
void print_alphabet_x10(void)
{
char letters;
int i;
for (i = 0; i <= 9; i++)
{
for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
/*THE FOLLOWING DOES NOT APPLY THIS TASK*/
/*this final _puthcar is not in a loop*/
/*this means if the function fired at all, it should a newline*/
}
return;
}
