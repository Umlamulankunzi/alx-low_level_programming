#ifndef DOG_H
#define DOG_H

/**
* struct dog - Dog struct
* @name: string
* @age: float
* @owner: string
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;

#endif

