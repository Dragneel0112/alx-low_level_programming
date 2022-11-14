#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - Structure with dog info
 * @name: Dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Structure with dog identification information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
