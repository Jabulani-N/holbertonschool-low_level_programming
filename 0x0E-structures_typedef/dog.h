#ifndef dog_h
#define dog_h
/**
 *struct dog - experimental
 *@name: trivial
 *@owner: tbd
 *@age: just a float
 */

struct dog
{
	char *name, *owner;
	float age;
/* test comment. dog's traits are inconsequential*/

};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

