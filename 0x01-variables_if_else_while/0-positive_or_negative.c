#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * this basically spams therelevant if statements.
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
