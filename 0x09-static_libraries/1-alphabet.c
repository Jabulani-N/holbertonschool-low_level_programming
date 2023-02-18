#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h> /*this is only included for strlen(c) to work*/
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * print_alphabet - iterates a cahr through alphabet, sends it to _printchar
 *
 * Return: Void
 *
 *send the caracters in the alphabet to function _putchar
 */
void print_alphabet(void)
{
char letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
/*this final _puthcar is not in a loop*/
/*this means if the function fired at all, it should a newline*/
return;
}
