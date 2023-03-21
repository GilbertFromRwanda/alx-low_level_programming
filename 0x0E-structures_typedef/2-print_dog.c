#include "main.h"
#include "dog.h"
/**
 *print_dog - print
 *struct dog - dog struct
 *@d: for dog oject
 */
void print_dog(struct dog *d)
{
if(d == NULL)
{
return ;
}
else
{
if(d.name == NULL)
{
printf("Name:(nil)\n");
}
else
{
printf("Name:%s\n", d.name);
}
if(d.owner == NULL)
{
printf("Owner:(nil)\n");
}
else
{
printf("Owner: %s\n", d.owner);
}
if(d.age == NULL)
{
printf("Age:(nil)\n");
}
else
{
printf("Age: %ld\n", d.age);
}
}
}
