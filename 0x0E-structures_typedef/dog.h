#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information about the dog
 * @name: name of the dog type char
 * @age: age of the dog type float
 * @owner: owner of the dog type char
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif