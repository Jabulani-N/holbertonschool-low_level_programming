#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * more_numbers - prints numbers
 *once we break 10 reps, we gotta add the extra 0-4
 * Return: void
 */
void more_numbers(void)
{
int i;
int j;
for (j = 1; j = 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar('1');
}
_putchar(i % 10 + 48);
}
_putchar('\n');
}
return;
}
