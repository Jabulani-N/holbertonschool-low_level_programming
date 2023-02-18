#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * print_line - prints arg length line
 * @n: the arg in questino
 * counts backwards so it doesn't print any lines for negatrive numbers
 * Return: void
 */
void print_line(int n)
{
int i;

for (i = n; i > 0; i--)
{
_putchar('_');
}
_putchar('\n');
return;
}
