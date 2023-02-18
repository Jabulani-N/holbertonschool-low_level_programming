#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 *for loop from 0-9.
 * note that doing ++ to a letter character moves it to the next alphabet char
 *   Case sensitive
 * Mostly copied from Task 2
 */
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
printf("%i", num);
}
putchar('\n');
return (0);
}
