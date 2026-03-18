#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    i = 0;
    while (ops[i].op != NULL && (*(ops[i].op) != *s || ops[i].op[1] != s[1]))
        i++;
    
    if (ops[i].op != NULL)
        return (ops[i].f);
    
    return (NULL);
}