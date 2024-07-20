#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - crée un nouveau chen
* @name: le nom du chien
* @age: l'âge du chien
* @owner: le propriétair
*
* Return:vise vers le nouveau chien, ou le bute
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *chien, *proprio;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	chien = malloc(strlen(name) + 1);
	if (chien == NULL)
	{
	free(dog);
	return (NULL);
	}
	strcpy(chien, name);

	proprio = malloc(strlen(owner) + 1);
	if (proprio == NULL)
	{
	free(chien);
	free(dog);
	return (NULL);
	}
	strcpy(proprio, owner);

	dog->name = chien;
	dog->age = age;
	dog->owner = proprio;

	return (dog);
}
