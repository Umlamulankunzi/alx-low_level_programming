#include <stdlib.h>
#include "dog.h"



/**
* new_dog - creates new dog struct
* @name: string dog name
* @age: float dog age
* @owner: string dog owner
* Return: struct dog_t if successful else NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;

	dog_t *dog_n = malloc(sizeof(dog_t));

	if (dog_n == NULL)
		return (NULL);

	new_name = malloc((_strlen(name) + 1) * sizeof(char));
	if (new_name == NULL)
	{
		free(dog_n);
		return (NULL);
	}
	_strcpy(new_name, name);

	new_owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog_n);
		return (NULL);
	}
	_strcpy(new_owner, owner);

	dog_n->name = new_name;
	dog_n->age = age;
	dog_n->owner = new_owner;

	return (dog_n);
}



/**
* _strcpy - copy string @src to string @dest
* @src: copy from
* @dest: copy to
*/
void _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
}



/**
* _strlen - calculate length of string @s
* @s: string
* Return: int length of string
*/
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;
	return (index);
}
