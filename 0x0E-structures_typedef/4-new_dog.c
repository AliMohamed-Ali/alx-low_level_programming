#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - that copy a variable of type struct dog
 * @name: name of dog
 * @age: name of age
 * @owner: name of owner
 * Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;

if (!name || age < 0 || !owner)
{
return (NULL);
}
newDog = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
newDog->name = malloc(sizeof(char) * strlen(name) + 1);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->owner = malloc(sizeof(char) * strlen(owner) + 1);
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
newDog->name = strcpy(newDog->name, name);
newDog->age = age;
newDog->owner = strcpy(newDog->owner, owner);
return (newDog);
}
