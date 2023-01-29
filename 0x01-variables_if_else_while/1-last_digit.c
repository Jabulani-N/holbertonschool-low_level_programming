#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * from previous entry:
 * this basically spams the relevant if statements.
 *Current project task 1:
 * before spamming those relevant if statements, it'll first announce the last digit of n.
 *we'll save that last digit in a nother variable, and then edit the relevant if statement spam from the previous question to apply to this new variable and criteria.
 */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("%i ", n);
if (n == 0)
{
printf("is zero\n");
return (0);
}
if (n > 0)
{
printf("is positive\n");
return (0);
}
printf("is negative\n");
return (0);
}
