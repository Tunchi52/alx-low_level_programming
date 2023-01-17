#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * new_dog - new dog
  * @name: dogs name
  * @age: dogs age
  * @owner: dogs owner
  * Return: newdog
  */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *doge;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(i * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		doge->name[k] = name[k];
