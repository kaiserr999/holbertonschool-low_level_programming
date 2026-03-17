#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: holds basic data about a dog.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_H */
