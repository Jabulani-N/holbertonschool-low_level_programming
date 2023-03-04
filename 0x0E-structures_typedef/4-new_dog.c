/**
 * new_dog - shoves values into a dog structure
 *
 * struct new_dog - struct with name, owner, age,
 *
 * @name: goes in the name slot
 * @age: goes in the age slot
 * @owner: goes in owner slot
 *
 * Return: newly created dog structure
 */

#include "dog.h"
#include "main.h"
#include <string.h>
#include <stdlib.h>


/*
 *so the struct dog mydog has already been done in 4-main.c
 *we get passed info to shove into the new dog
 *
 * we'll make a new dog, and fill it with the appropriate elements
 * after that, we'll return the newly created struct's content
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/*always make sure you can handle nulls*/
	if (name == NULL || owner == NULL)
		return (NULL);

	/*example of two different ways to access elements*/
	d->name = name;
	d->owner = owner;
	d->age = age;

	if (d == NULL)
		return (NULL);

	return(d);
}


