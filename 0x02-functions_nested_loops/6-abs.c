#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 *_abs - just see if the number is lower than 0.
 *if so, multiply it by negative 1 and return it.
 *otherwise, return it.
 *No relation to Ima made ichido mo onna atsukaisareta...
 *...koto ga nai jokishi wo onna atsukai suru manga
 * @n: the number we'll be judging the status of
 * Return: depends
 * essentially copies task 5
 */
int _abs(int n)
{
int m;
if (n < 0)
{/*negative*/
m = n * (-1);
return (m);
}
return (n);
}
