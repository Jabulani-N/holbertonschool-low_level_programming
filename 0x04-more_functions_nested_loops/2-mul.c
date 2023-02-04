#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * mul - return product of provided input
 * @a: thing one
 * @b: thing two
 * Return: product
 */
int mul(int a, int b)
{
return (a * b);
}
