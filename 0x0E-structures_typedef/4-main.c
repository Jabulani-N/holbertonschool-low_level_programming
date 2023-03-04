#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  dog_t *my_dog;
/* printf(NULL);*/

  my_dog = new_dog("Poppy", 3.5, "Bob");
  printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);


  my_dog = new_dog(NULL, 3.5, "Bob");
    printf("Null name test: My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);


  my_dog = new_dog("Poppy", -3.5, "Bob");
    printf("Negative age test: My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);


  my_dog = new_dog("Poppy", 3.5, NULL);
    printf("null owner test: My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

  my_dog = new_dog(NULL,0, NULL);
    printf("0 age, null both test: My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

  return (0);
}
