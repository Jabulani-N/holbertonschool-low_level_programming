#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 *for loop from a-z.
 * note that doing ++ to a letter character moves it to the next alphabet char
 *   Case sensitive
 * to make putchar print '0', give it 48 as a raw number.
 * subsequent 0-9 numbers are the subsequent integers.
 * Basically copied from Task 8
 */
int main(void)
{

int letter;
char letters;
for (letter = 48; letter <= 57; letter++)
{
putchar(letter);
}
for (letters = 'a'; letters <= 'f'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
