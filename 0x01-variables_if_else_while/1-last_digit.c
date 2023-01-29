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
 *we'll save that last digit in a nother variable,
 * and then edit the relevant if statement spam from the previous question
 *   to apply to this new variable and criteria.
 *The moludlo (%) is gonna be our friend here.
 * x % y gives the remainder of x/y.
 *  when y=10, that essentially means the last digit.
 */
int main(void)
{

int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastDigit = (n % 10);
printf("Last digit of %i is %i ", n, lastDigit);
if (lastDigit == 0)
{
printf("and is 0\n");
return (0);
}
if (n > 5)
{
printf("and is greater than 5\n");
return (0);
}
printf("and is less than 6 and not 0\n");
return (0);
}
