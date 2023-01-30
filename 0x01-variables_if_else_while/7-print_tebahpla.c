#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 *for loop from z-a.
 * note that doing ++ to a letter character moves it to the next alphabet char
 *   Case sensitive
 * Basically copied fomr Task 2
 */
int main(void)
{

char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
