#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf functions
 * @format: The format string
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
        int printed_chars = 0;
        const char *ptr = format;

        va_list args;
        va_start(args, format);

        while (*ptr != '\0')
        {
                if (*ptr == '%')
                {
                        ptr++;

                        while (*ptr == '-' || *ptr == '+' || *ptr == ' ' || *ptr == '0' || *ptr == '#')
                                ptr++;

                        while (*ptr >= '0' && *ptr <= '9')
                                ptr++;

                        if (*ptr == '.')
                        {
                                ptr++;
                                while (*ptr >= '0' && *ptr <= '9')
                                        ptr++;
                        }

                        if (*ptr == 'h' || *ptr == 'l' || *ptr == 'j' || *ptr == 'z' || *ptr == 't' || *ptr == 'L')
                                ptr++;

                        if (*ptr == 'c')
                        {
                                int c = va_arg(args, int);

                                putchar(c);
                                printed_chars++;
                        }
                        else if (*ptr == 's')
                        {
                                char *s = va_arg(args, char *);

                                printed_chars += printf("%s", s);
                        }
                        else if (*ptr == 'd' || *ptr == 'i')
                        {
                                int d = va_arg(args, int);

                                printed_chars += printf("%d", d);
                        }
                        else
                        {
                                putchar(*ptr);
                                printed_chars++;
                        }
                }
                else
                {
                        putchar(*ptr);
                        printed_chars++;
                }

                ptr++;

        }
        va_end(args);

        return (printed_chars);
}
