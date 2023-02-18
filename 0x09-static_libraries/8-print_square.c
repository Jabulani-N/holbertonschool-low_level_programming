#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * print_square - prints arg length hashes, then newline
 * Repeat arg times
 * @size: the arg in questino
 * counts backwards so it doesn't print any lines for negatrive numbers
 *copied from Task 7, which is a more difficult version of this.
 * Return: void
 */
void print_square(int size)
{
int i;
/*counter var for loop 1 (outer)*/
int j;
/*counter var for loop 2 (inner)*/
for (i = size; i > 0; i--)
/*i is counting backwards so if we get a negative n,*/
/* it'll skip looping becaue it's never above 0*/
{
for (j = 1; j <= size; j++)
/* j can count either forward or back. I choose forwards.*/
/* j will count up from 0 to the size = how many hashes to put*/
/*counting backwards woudld be second safeguard against negative input*/
{
_putchar('#');
}
/*we have just put size number of hashes*/
/*now we want a newline. it's in the loop that occurs size number of times*/
_putchar('\n');
}
if (size <= 0)
_putchar ('\n');/*prints \n if it would print nothing*/
return;
}
