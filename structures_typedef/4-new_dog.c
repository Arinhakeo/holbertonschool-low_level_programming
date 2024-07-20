#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
*new_dog nouveau chien
*@name: le nom du chien
*@age: l'âge du chien
*@owner: le proprio
*
*Retour:vise vers le nouveau chien, ou le bute
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int cleps, proprio, i;

dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

cleps = 0;
	while (name[cleps])
	cleps++;

proprio = 0;
	while (owner[proprio])
	proprio++;

dog->name = malloc(cleps + 1);
	if (dog->name == NULL)
{
free(dog);
	return (NULL);
}

dog->owner = malloc(proprio + 1);
	if (dog->owner == NULL)
		{
		free(dog->name);
		free(dog);
		return (NULL);
		}

	for (i = 0; i <= cleps; i++)
	dog->name[i] = name[i];

	for (i = 0; i <= proprio; i++)
	dog->owner[i] = owner[i];

	dog->age = age;

return (dog);
}
