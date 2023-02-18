#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * _isdigit - just see if the number is lower than the minimum digit value.
 *if so, see if it's lower than the maximum digit ascii.
 *otherwise, return the 'no it's not' output.
 *This script is copied from _isupper
 * @c: the character we'll be judging the status of
 * Return: depends
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
