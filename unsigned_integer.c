#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_unsgined_number - function that prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_unsgined_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}



/**
 * unsigned_integer - function that prints unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
