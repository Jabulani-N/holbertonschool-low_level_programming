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
	char *nameCopy, *ownerCopy;
	int len = 0, magicalIndex = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	while (name[len])
		len++;
	nameCopy = malloc(sizeof(name) * (len + 1));
	if (nameCopy == NULL)
	{
		free(d);
		return (NULL);
	} /*next assign the name, character by character*/
	while (magicalIndex < len)
	{
		nameCopy[magicalIndex] = name[magicalIndex], magicalIndex++;
	}
	nameCopy[magicalIndex++] = '\0', len = 0, magicalIndex = 0;
	while (owner[len])
		len++;
	ownerCopy = malloc(sizeof(owner) * (len + 1));
	if (ownerCopy == NULL)
	{
		free(d->name), free(d);
		return (NULL);
	} /*next assign owner, character by character*/
	while (magicalIndex < len)
	{
		ownerCopy[magicalIndex] = owner[magicalIndex];
		magicalIndex++;
	} ownerCopy[magicalIndex] = '\0';/*always make sure you can handle nulls*/
	if (name == NULL || owner == NULL)
	{
		free(d->owner), free(d->name), free(d);
		return (NULL);
	} d->name = nameCopy, d->owner = ownerCopy, d->age = age;
	return (d);
}
/*
 * it probbaly wants the terminating null at he end of the owner and name
 *
 *
 */
