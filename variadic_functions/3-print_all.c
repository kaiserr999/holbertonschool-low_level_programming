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
    char *str, *sep;

    va_start(args, format);
    i = 0;
    sep = "";
    while (format && format[i])
    {
        j = 0;
        while ("cifs"[j])
        {
            if (format[i] == "cifs"[j])
            {
                printf("%s", sep);
                if (j == 0)
                    printf("%c", va_arg(args, int));
                if (j == 1)
                    printf("%d", va_arg(args, int));
                if (j == 2)
                    printf("%f", va_arg(args, double));
                if (j == 3)
                {
                    str = va_arg(args, char *);
                    printf("%s", str ? str : "(nil)");
                }
                sep = ", ";
            }
            j++;
        }
        i++;
    }
    va_end(args);
    printf("\n");
}