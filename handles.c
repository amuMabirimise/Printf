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
	unsigned int inputDecimal;
	unsigned int inputOctal;
	unsigned int inputHex;

	printf("Unsigned decimal value: %u\n", value);
	printf("Octal value: %o\n", octal);
	printf("Lowercase hexadecimal value: %x\n", lowercasehex);
	printf("Uppercase hexadecimal value: %X\n", uppercasehex);

	printf("Enter a decimal number: ");
	scanf("%u", &inputDecimal);
	printf("Decimal entered: %o\n", inputDecimal);

	printf("Enter an octal number: ");
	scanf("%o", &inputOctal);
	printf("Octal entered: %o\n", inputOctal);

	printf("Enter a hexadecimal number: ");
	scanf("%x", &inputHex);
	printf("Hexadecimal entered: %x\n", inputHex);

	return (0);
}
