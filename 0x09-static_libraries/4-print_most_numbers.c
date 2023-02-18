#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * print_most_numbers - prints numbers
 * Has an if- contitional
 * Return: void
 */
void print_most_numbers(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
{
_putchar(i);
}
}
_putchar('\n');
return;
}
