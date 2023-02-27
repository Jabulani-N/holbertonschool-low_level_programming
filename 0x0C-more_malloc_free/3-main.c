#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
    {
      if (i % 10)
	{
	  printf(" ");
	}
      if (!(i % 10) && i)
	{
	  printf("\n");
	}
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  int *a;

  printf("0 to 10\n");
  a = array_range(0, 10);
  simple_print_buffer(a, 11);
  free(a);


  printf("-10 to 10\n");
  simple_print_buffer(a, 21);
  a = array_range(-10, 10);
  simple_print_buffer(a, 21);
  free(a);

  printf("11 to 11\n");
  a = array_range(11, 11);
  simple_print_buffer(a, 11);
  free(a);

  printf("10 to 0\n");
  a = array_range(10, 0);
  printf("array_range has finished acting.\nwe are back in main\n");
  simple_print_buffer(a, 11);
  free(a);
  return (0);
}
