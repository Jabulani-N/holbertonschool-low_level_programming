/**
 * init_dog - shoves values into a dog structure
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


/*
 *so the struct dog mydog has already been done in 1-main.c
 *we get passed a pointer of it's adress
 *	This allows us to access mydog's elements from 1-main.c
 *		by messing with *d.element = elementContent
 *
 * I do not want to declare d, because d aleady exists.
 *	I only want to edit d's elements
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*example of two different ways to access elements*/
	(*d).name = name;
	d->owner = owner;
	d->age = age;
}


