#include "main.h"
/**
 *_puts - shove string into _putchar
 * A string is an array of characters
 * This becomes much easier once you remember you can use _puts
 * @str: the char array that'll be investigsted
 * Return: Void
 * basically copied form the previous task
 **/

void _puts(char *str)
{
  for (; *str != '\0'; str++)
    {
      _putchar(*str);
    }
  _putchar('\n');
}
