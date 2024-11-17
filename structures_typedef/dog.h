#ifndef DOG_H
#define DOG_H
/**
 * struct dog - first sttruct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Desrpition: information about the dog
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_h;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
