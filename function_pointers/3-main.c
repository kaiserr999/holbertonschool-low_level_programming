#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char *operator;
    int (*func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    operator = argv[2];
    num2 = atoi(argv[3]);

    func = get_op_func(operator);

    if (func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if ((*operator == '/' || *operator == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = func(num1, num2);
    printf("%d\n", result);

    return (0);
}