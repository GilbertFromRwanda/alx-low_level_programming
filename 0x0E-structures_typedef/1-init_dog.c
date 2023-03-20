#include<stdio.h>
#include<string.h>
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 *init_dog - function for setting dog data
 *@d: object for dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
strcpy(d->name, name);
strcpy(d->owner, owner);
d->age = age;
}
