#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  char *concat;

  concat = string_nconcat("Best ", "School !!!", 6);
  printf("%s\n", concat);
  free(concat);
  concat = string_nconcat("Best ", "School !!!", 2);
  printf("%s\n", concat);
  free(concat);
  concat = string_nconcat("im fat. Empty is ", "next", 20);
  printf("%s\n", concat);
  free(concat);
  concat = string_nconcat("", "", 6);
  printf("%s\n", concat);
  free(concat);
  concat = string_nconcat("Best ", "School !!!", 0);
  printf("%s\n", concat);
  free(concat);
  concat = string_nconcat("Best ", "School !!!", -1);
  printf("%s\n", concat);
  free(concat);
  return (0);
}
