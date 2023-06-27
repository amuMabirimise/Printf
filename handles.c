#include <stdio.h>
/**
 * handles - Entry point
 *
 * Return: Always 0
 */
int handles(void)
{
	unsigned int value = 42;
	unsigned int octal = 63;
	unsigned int lowercasehex = 255;
	unsigned int uppercasehex = 255;

	printf("Unsigned decimal value: %u\n", value);
	printf("Octal value: %o\n", octal);
	printf("Lowercase hexadecimal value: %x\n", lowercasehex);
	printf("Uppercase hexadecimal value: %X\n", uppercasehex);

	return (0);
}
