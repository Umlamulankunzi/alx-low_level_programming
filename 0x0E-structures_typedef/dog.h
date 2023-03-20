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
typedef struct dog dog_t


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

