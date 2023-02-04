#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "main.h"
/*including main.h makes it scan main.h, & include all functions within*/
/*within main.h is a list of every function my functions will call*/
/* more headers goes there */
/**
 * main - msut be caleld main so thatt there is a 'main'
 * as a main, it must be an int, and try to return 0
 * spams printing outputs via for loop.
 * checks if it's divisible eevnly by 15, 5, and 3
 *first hit triggers the response.
 *otherwise, return the 'no it's not' output of the offending number
 * Return: always zero because it's a main
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
	printf("Buzz ");
}
else
{
	printf("%i ", i);
}
}
putchar('\n');
return (0);
}
