#ifndef MAIN_H
#define MAIN_H
#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_integer(va_list list);
int unsigned_integer(va_list list);
int print_number(va_list args);
int print_unsgined_number(unsigned int n);

#endif
