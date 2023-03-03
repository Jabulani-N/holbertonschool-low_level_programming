/**
 *
 *
 *init_dog - shoves values into a dog structure
 *
 *struct dog - struct with name, owner, age,
 *@d: dog in question. an address.
 *	the asterik makes it a structure
 *@name: goes in the name slot
 *@age: goes in the age slot
 *@owner: goes in owner slot
 *
 * Return: nothing, or an address
 *	Proabbly nothing, as we directly edit d via address
 */

#include "dog.h"
#include "main.h"
#include <string.h>


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog *d = {.name = *name, .age = age, .owner = *owner};
	return;
}


