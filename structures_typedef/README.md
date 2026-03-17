# structures_typedef

This directory contains a definition for a `struct dog` used in Holberton School projects.

## Files

- `dog.h` - defines the `struct dog` type and a `typedef`.

## `struct dog`

The struct is defined as:

```c
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;
```

## Example usage

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";

    printf("My name is %s, and I am %.1f :) - Woof!\n",
           my_dog.name, my_dog.age);
    return (0);
}
```
