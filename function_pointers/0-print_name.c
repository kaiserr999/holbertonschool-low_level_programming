#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name to print
 * @f: function to use for printing
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != 0 && f != 0)
        f(name);
}