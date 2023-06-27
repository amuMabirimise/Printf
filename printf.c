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
	unsigned int decimal = 42;
	unsigned int octal = 63;
	unsigned int lowercasehex = 255;
	unsigned int uppercasehex = 255;
	unsigned int inputDecimal;
	unsigned int inputOctal;
	unsigned int inputHex;

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

	printf("Unsigned decimal: %u\n", decimal);
	printf("Octal: %o\n", octal);
	printf("Lowercase hexadecimal: %x\n", lowercasehex);
	printf("Uppercase hexadecimal: %X\n", uppercasehex);

	printf("Enter a decimal number: ");
	scanf("%u", &inputDecimal);
	printf("Decimal entered: %o\n", inputDecimal);

	printf("Enter an octal number: ");
	scanf("%o", &inputOctal);
	printf("Octal entered: %o\n", inputOctal);

	printf("Enter a hexadecimal number: ");
	scanf("%x", &inputHex);
	printf("Hexadecimal entered: %x\n", inputHex);
        va_end(args);

        return (printed_chars);
}
