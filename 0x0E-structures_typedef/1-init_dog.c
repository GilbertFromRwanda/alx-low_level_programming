#include "main.h"
#include "dog.h"
/**
 *init_dog - function for setting dog data
 *@d: object for dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog mydog = &d;
mydog->name = name;
mydog->owner = owner;
mydog->age = age;
}
