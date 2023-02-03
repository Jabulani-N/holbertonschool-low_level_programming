#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * _isupper - just see if the number is lower than the minimum uppercase value.
 *if so, see if it's lower than the maximum uppercase ascii.
 *otherwise, return the 'no it's not' output.
 *This script is copied from the previous Sprint assignmtnts's _islower
 * @c: the character we'll be judging the status of
 * Return: depends
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
