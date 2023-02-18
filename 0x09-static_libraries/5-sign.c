#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 *print_sign - just see if the number is lower than 0.
 *if not, see if it's higher than 0.
 *otherwise, return the 'it's 0' output.
 * @n: the number we'll be judging the status of
 * Return: depends
 * essentially copies task 4
 */
int print_sign(int n)
{
if (n > 0)
{/*positive. print '+'and return 1*/
_putchar('+');
return (1);
}
if (n < 0)
{/*negative*/
_putchar('-');
return (1);
}
/*none were true, so it's 0*/
_putchar('0');
return (0);
}
