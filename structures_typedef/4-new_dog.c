#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
* new_dog - Creates a new dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: Pointer to the newly created dog, or NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;

	return (dog);
}
