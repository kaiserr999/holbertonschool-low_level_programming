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
    int i, j;
    char *str;

    va_start(args, format);
    i = 0;
    while (format != 0 && format[i])
    {
        if (format[i] == 'c')
            printf("%c", va_arg(args, int));
        if (format[i] == 'i')
            printf("%d", va_arg(args, int));
        if (format[i] == 'f')
            printf("%f", va_arg(args, double));
        if (format[i] == 's')
        {
            str = va_arg(args, char *);
            if (str == 0)
                str = "(nil)";
            printf("%s", str);
        }
        j = i + 1;
        while (format[j] && format[j] != 'c' && format[j] != 'i' && 
               format[j] != 'f' && format[j] != 's')
            j++;
        if (format[j] && (format[i] == 'c' || format[i] == 'i' || 
                         format[i] == 'f' || format[i] == 's'))
            printf(", ");
        i++;
    }
    va_end(args);
    printf("\n");
}