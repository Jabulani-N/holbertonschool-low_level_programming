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
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 *send the caracters '_puchar' to the function _putchar
 */
int main(void)
{
char letters[8] = "_putchar";
int i;

for (i = 0; i <= /*strlen(letters)*/7; i++)
/*end position=7 because array[8] is 0-7*/
/*if this foor loop workswhen we directly state the length, */
/*then try function strlen to pull the length*/
/*strlenreturns a 'size_t', AKA long unsigned int*/
/*that makes it incompatible with int and long like i is*/
{
_putchar(letters[i]);
}
_putchar('\n');
/*this final _puthcar is not in a loop*/
/*this means if the function fired at all, it should a newline*/
return (0);
}
