#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 *_isalpha - just see if the number is lower than the minimum lowercase value.
 *if so, see if it's lower than the maximum lowercase ascii.
 *otherwise, try next condition,
 *otherwise, return the 'no it's not' output.
 * @c: the character we'll be judging the status of
 * Return: depends
 * essentially copies task 2
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{/*lowerscase*/
return (1);
}
if (c >= 65 && c <= 90)
{/*uppercase*/
return (1);
}
/*
 *we weren't supposed to accept numbers
 * if (c >= 48 && c <= 57)
 *{
 *return (1);
 *}
 */
return (0);
}
