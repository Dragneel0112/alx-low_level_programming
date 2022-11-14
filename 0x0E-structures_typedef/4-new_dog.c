#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog -new dog profile
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Pointer for new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0, y = 0, z;
	dog_t *_ptr;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;
	_ptr = malloc(sizeof(dog_t));

	if (_ptr == NULL)
	{
		free(_ptr);
		return (NULL);
	}
	_ptr->name = malloc(sizeof(_ptr->name) * x);
	if (_ptr->name == NULL)
	{
		free(_ptr->name);
		free(_ptr);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		_ptr->name[z] = name[z];

	_ptr->age = age;

	_ptr->owner = malloc(sizeof(_ptr->owner) * y);
	if (_ptr->owner == NULL)
	{
		free(_ptr->owner);
		free(_ptr->name);
		free(_ptr);
		return (NULL);
	}
	for (z = 0; z <= y; z++)
		_ptr->owner[z] = owner[z];
	return (_ptr);
}
