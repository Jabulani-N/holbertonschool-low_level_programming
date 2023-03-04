/**
 * print_dog - shoves values into a dog structure
 *
 *struct dog - struct with name, owner, age,
 *@d: dog in question. an address.
 *	the asterik makes it a structure
 *
 *
 * Return: nothing, or an address
 *	Proabbly nothing, as we directly edit d via address
 */

#include "dog.h"
#include "main.h"
#include <string.h>
#include <stdio.h>


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
void print_dog(struct dog *d)
{
	/*always make sure you can handle nulls*/
	if (d == NULL)
		return;
	if(d->name == NULL)
		d->name = "(nil)";
        if(d->owner == NULL)
	                d->owner = "(nil)";
/*	if (d->age == NULL)*/
/*		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);*/
/*	else*/
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}


