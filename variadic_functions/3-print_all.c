#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments to print
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i;
    char *str, *sep;

    i = 0;
    sep = "";
    va_start(args, format);
    while (format && format[i])
    {
        if (format[i] == 'c')
        {
            printf("%s%c", sep, va_arg(args, int));
            sep = ", ";
        }
        if (format[i] == 'i')
        {
            printf("%s%d", sep, va_arg(args, int));
            sep = ", ";
        }
        if (format[i] == 'f')
        {
            printf("%s%f", sep, va_arg(args, double));
            sep = ", ";
        }
        if (format[i] == 's')
        {
            str = va_arg(args, char *);
            if (str == 0)
                str = "(nil)";
            printf("%s%s", sep, str);
            sep = ", ";
        }
        i++;
    }
    va_end(args);
    printf("\n");
}